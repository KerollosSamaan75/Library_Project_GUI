#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QJsonArray>
#include<QJsonDocument>
#include<QJsonObject>
#include<QFile>
#include<QMessageBox>
#include<QDebug>
#include<QWidget>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->comboBox->addItems({"Fantasy", "Kids", "Religion", "Romance"});
    ui->tabWidget->setTabEnabled(0,true);
    ui->tabWidget->setTabEnabled(1,false);
    ui->tabWidget->setTabEnabled(2,false);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pbLogin_clicked()
{
    QFile file("LoginDB.json");
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        QMessageBox::warning(this, "Error", "Unable to open the JSON file");
        return;
    }

    QByteArray jsonData = file.readAll();
    file.close();

    // Parse JSON data
    QJsonDocument doc = QJsonDocument::fromJson(jsonData);
    if (doc.isNull() || !doc.isArray())
    {
        QMessageBox::warning(this, "Error", "Invalid JSON data");
        return;
    }

    QJsonArray users = doc.array();

    // Retrieve input from QLineEdit widgets
    QString username = ui->lEName->text();
    QString password = ui->lEPassword->text();

    // Check credentials
    for (const QJsonValue &value : users)
    {
        QJsonObject user = value.toObject();
        if (user["UserName"].toString() == username && QString::number(user["Password"].toInt()) == password)
        {
            if (user["Auth"].toString() == "Admin")
            {
                ui->tabWidget->setTabEnabled(1,true);
                ui->tabWidget->setTabEnabled(0,false);

                ui->tabWidget->setTabEnabled(2,false);

            }
            else if (user["Auth"].toString() == "User")
            {
                ui->tabWidget->setTabEnabled(2,true);
                ui->tabWidget->setTabEnabled(0,false);
                ui->tabWidget->setTabEnabled(1,false);

            }
            return;
        }
    }

    // If credentials do not match, show a warning message
    QMessageBox::warning(this, "Login Failed", "Invalid username or password");
}


void MainWindow::on_pbStoreData_clicked()
{
    storedUsername = ui->lEName->text();
    storedPassword = ui->lEPassword->text();
    ui->lEName->clear();
    ui->lEPassword->clear();
}


void MainWindow::on_pbRestoreData_clicked()
{
    ui->lEName->setText(storedUsername);
    ui->lEPassword->setText(storedPassword);
}


void MainWindow::on_pbRemoveData_clicked()
{
    storedUsername.clear();
    storedPassword.clear();
    ui->lEName->clear();
    ui->lEPassword->clear();
}


void MainWindow::on_Search_clicked()
{
    QFile file("library.json");
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        QMessageBox::warning(this, "Error", "Unable to open the library database file");
        return;
    }

    QByteArray jsonData = file.readAll();
    file.close();


    QJsonDocument doc = QJsonDocument::fromJson(jsonData);
    if (doc.isNull() || !doc.isArray())
    {
        QMessageBox::warning(this, "Error", "Invalid JSON data");
        return;
    }

    QJsonArray books = doc.array();

    QString title = ui->lineEdit->text();
    QString filter = ui->comboBox->currentText();

    ui->listWidget->clear();
    for (const QJsonValue &value : books)
    {
        QJsonObject book = value.toObject();
        if ((title.isEmpty() || book["title"].toString().contains(title, Qt::CaseInsensitive)) &&
            book["category"].toString() == filter) {
            QString bookInfo = QString("Title: %1\nAuthor: %2\nBarcode: %3\nCategory: %4")
                                   .arg(book["title"].toString())
                                   .arg(book["author"].toString())
                                   .arg(book["barcode"].toString())
                                   .arg(book["category"].toString());
            ui->listWidget->addItem(bookInfo);
            qDebug()<<Qt::endl;
        }
    }
}


void MainWindow::on_pushButtonClear_clicked()
{
    ui->lineEdit->clear();
    ui->listWidget->clear();
}


void MainWindow::on_pushButtonExit_clicked()
{
    close();
}


void MainWindow::on_AddBook_clicked()
{
    QString title = ui->lineEditBookTitle->text();
    QString author = ui->lineEditBookAuthor->text();
    QString category = ui->lineEditBookCategory->text();
    QString barcode = ui->lineEditBookBarcode->text();

    QFile file("library.json");
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        QMessageBox::warning(this, "Error", "Unable to open the library database file");
        return;
    }

    QByteArray jsonData = file.readAll();
    file.close();


    QJsonDocument doc = QJsonDocument::fromJson(jsonData);
    QJsonArray books = doc.array();

    QJsonObject newBook;
    newBook["title"] = title;
    newBook["author"] = author;
    newBook["category"] = category;
    newBook["barcode"] = barcode;


    books.append(newBook);

    QJsonDocument updatedDoc(books);
    if (!file.open(QIODevice::WriteOnly | QIODevice::Text))
    {
        QMessageBox::warning(this, "Error", "Unable to open the library database file for writing");
        return;
    }

    file.write(updatedDoc.toJson());
    file.close();


    QString bookInfo = QString("Title: %1\nAuthor: %2\nCategory: %3\nBarcode: %4")
                           .arg(title)
                           .arg(author)
                           .arg(category)
                           .arg(barcode);
    ui->listWidgetResult->addItem(bookInfo);

    ui->lineEditBookTitle->clear();
    ui->lineEditBookAuthor->clear();
    ui->lineEditBookCategory->clear();
    ui->lineEditBookBarcode->clear();

    QMessageBox::information(this, "Success", "Book added successfully");
}


void MainWindow::on_pushButtonExit_2_clicked()
{
    close();
}

