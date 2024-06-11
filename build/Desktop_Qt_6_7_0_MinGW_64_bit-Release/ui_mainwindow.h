/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGroupBox *Library;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *lEName;
    QLabel *label_2;
    QLineEdit *lEPassword;
    QPushButton *pbLogin;
    QPushButton *pbStoreData;
    QPushButton *pbRestoreData;
    QPushButton *pbRemoveData;
    QWidget *tab_3;
    QGridLayout *gridLayout_3;
    QLabel *label_8;
    QLabel *label_5;
    QLineEdit *lineEditBookTitle;
    QLineEdit *lineEditBookAuthor;
    QLabel *label_6;
    QPushButton *pushButtonExit_2;
    QLineEdit *lineEditBookCategory;
    QLabel *label_7;
    QLineEdit *lineEditBookBarcode;
    QPushButton *AddBook;
    QListWidget *listWidgetResult;
    QWidget *tab_2;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QLineEdit *lineEdit;
    QHBoxLayout *horizontalLayout;
    QLabel *label_4;
    QComboBox *comboBox;
    QPushButton *Search;
    QListWidget *listWidget;
    QPushButton *pushButtonClear;
    QPushButton *pushButtonExit;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        Library = new QGroupBox(centralwidget);
        Library->setObjectName("Library");
        Library->setGeometry(QRect(50, 0, 751, 511));
        tabWidget = new QTabWidget(Library);
        tabWidget->setObjectName("tabWidget");
        tabWidget->setGeometry(QRect(10, 60, 721, 431));
        tab = new QWidget();
        tab->setObjectName("tab");
        gridLayout = new QGridLayout(tab);
        gridLayout->setObjectName("gridLayout");
        label = new QLabel(tab);
        label->setObjectName("label");

        gridLayout->addWidget(label, 0, 0, 1, 1);

        lEName = new QLineEdit(tab);
        lEName->setObjectName("lEName");

        gridLayout->addWidget(lEName, 0, 1, 1, 2);

        label_2 = new QLabel(tab);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 1, 0, 1, 2);

        lEPassword = new QLineEdit(tab);
        lEPassword->setObjectName("lEPassword");

        gridLayout->addWidget(lEPassword, 1, 2, 1, 1);

        pbLogin = new QPushButton(tab);
        pbLogin->setObjectName("pbLogin");

        gridLayout->addWidget(pbLogin, 2, 0, 1, 3);

        pbStoreData = new QPushButton(tab);
        pbStoreData->setObjectName("pbStoreData");

        gridLayout->addWidget(pbStoreData, 3, 0, 1, 3);

        pbRestoreData = new QPushButton(tab);
        pbRestoreData->setObjectName("pbRestoreData");

        gridLayout->addWidget(pbRestoreData, 4, 0, 1, 3);

        pbRemoveData = new QPushButton(tab);
        pbRemoveData->setObjectName("pbRemoveData");

        gridLayout->addWidget(pbRemoveData, 5, 0, 1, 3);

        tabWidget->addTab(tab, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName("tab_3");
        gridLayout_3 = new QGridLayout(tab_3);
        gridLayout_3->setObjectName("gridLayout_3");
        label_8 = new QLabel(tab_3);
        label_8->setObjectName("label_8");

        gridLayout_3->addWidget(label_8, 4, 0, 1, 1);

        label_5 = new QLabel(tab_3);
        label_5->setObjectName("label_5");

        gridLayout_3->addWidget(label_5, 0, 0, 1, 1);

        lineEditBookTitle = new QLineEdit(tab_3);
        lineEditBookTitle->setObjectName("lineEditBookTitle");

        gridLayout_3->addWidget(lineEditBookTitle, 0, 2, 1, 2);

        lineEditBookAuthor = new QLineEdit(tab_3);
        lineEditBookAuthor->setObjectName("lineEditBookAuthor");

        gridLayout_3->addWidget(lineEditBookAuthor, 1, 2, 1, 2);

        label_6 = new QLabel(tab_3);
        label_6->setObjectName("label_6");

        gridLayout_3->addWidget(label_6, 1, 0, 1, 2);

        pushButtonExit_2 = new QPushButton(tab_3);
        pushButtonExit_2->setObjectName("pushButtonExit_2");

        gridLayout_3->addWidget(pushButtonExit_2, 10, 3, 1, 1);

        lineEditBookCategory = new QLineEdit(tab_3);
        lineEditBookCategory->setObjectName("lineEditBookCategory");

        gridLayout_3->addWidget(lineEditBookCategory, 3, 3, 1, 1);

        label_7 = new QLabel(tab_3);
        label_7->setObjectName("label_7");

        gridLayout_3->addWidget(label_7, 3, 0, 1, 3);

        lineEditBookBarcode = new QLineEdit(tab_3);
        lineEditBookBarcode->setObjectName("lineEditBookBarcode");

        gridLayout_3->addWidget(lineEditBookBarcode, 4, 2, 1, 2);

        AddBook = new QPushButton(tab_3);
        AddBook->setObjectName("AddBook");

        gridLayout_3->addWidget(AddBook, 10, 0, 1, 1);

        listWidgetResult = new QListWidget(tab_3);
        listWidgetResult->setObjectName("listWidgetResult");

        gridLayout_3->addWidget(listWidgetResult, 9, 0, 1, 4);

        tabWidget->addTab(tab_3, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        gridLayout_2 = new QGridLayout(tab_2);
        gridLayout_2->setObjectName("gridLayout_2");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_3 = new QLabel(tab_2);
        label_3->setObjectName("label_3");

        horizontalLayout_2->addWidget(label_3);

        lineEdit = new QLineEdit(tab_2);
        lineEdit->setObjectName("lineEdit");

        horizontalLayout_2->addWidget(lineEdit);


        gridLayout_2->addLayout(horizontalLayout_2, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label_4 = new QLabel(tab_2);
        label_4->setObjectName("label_4");

        horizontalLayout->addWidget(label_4);

        comboBox = new QComboBox(tab_2);
        comboBox->setObjectName("comboBox");

        horizontalLayout->addWidget(comboBox);


        gridLayout_2->addLayout(horizontalLayout, 1, 0, 1, 1);

        Search = new QPushButton(tab_2);
        Search->setObjectName("Search");

        gridLayout_2->addWidget(Search, 2, 0, 1, 1);

        listWidget = new QListWidget(tab_2);
        listWidget->setObjectName("listWidget");

        gridLayout_2->addWidget(listWidget, 3, 0, 1, 1);

        pushButtonClear = new QPushButton(tab_2);
        pushButtonClear->setObjectName("pushButtonClear");

        gridLayout_2->addWidget(pushButtonClear, 4, 0, 1, 1);

        pushButtonExit = new QPushButton(tab_2);
        pushButtonExit->setObjectName("pushButtonExit");

        gridLayout_2->addWidget(pushButtonExit, 4, 1, 1, 1);

        tabWidget->addTab(tab_2, QString());
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        Library->setTitle(QCoreApplication::translate("MainWindow", "Library", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Enter your name : ", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Enter your password :", nullptr));
        pbLogin->setText(QCoreApplication::translate("MainWindow", "Login", nullptr));
        pbStoreData->setText(QCoreApplication::translate("MainWindow", "Store Data", nullptr));
        pbRestoreData->setText(QCoreApplication::translate("MainWindow", "Restore Data", nullptr));
        pbRemoveData->setText(QCoreApplication::translate("MainWindow", "Remove Data ", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("MainWindow", "Login", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "Add Bar Code", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Enter the Book Title", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Enter the Book Author", nullptr));
        pushButtonExit_2->setText(QCoreApplication::translate("MainWindow", "Exit", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Enter the Book Category", nullptr));
        AddBook->setText(QCoreApplication::translate("MainWindow", "Add Book", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("MainWindow", "Admin", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Enter Title : ", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Enter Filter : ", nullptr));
        Search->setText(QCoreApplication::translate("MainWindow", "Search", nullptr));
        pushButtonClear->setText(QCoreApplication::translate("MainWindow", "Clear", nullptr));
        pushButtonExit->setText(QCoreApplication::translate("MainWindow", "Exit", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("MainWindow", "User", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
