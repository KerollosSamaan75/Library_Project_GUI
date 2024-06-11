#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    //void on_pushButton_clicked();

    void on_pbLogin_clicked();

    void on_pbStoreData_clicked();

    void on_pbRestoreData_clicked();

    void on_pbRemoveData_clicked();

   // void on_pushButtonLogin_clicked();

    //void on_pushButtonSearch_clicked();

    void on_Search_clicked();

    void on_pushButtonClear_clicked();

    void on_pushButtonExit_clicked();

    void on_AddBook_clicked();

    void on_pushButtonExit_2_clicked();

private:
    Ui::MainWindow *ui;
    QString storedUsername;
    QString storedPassword;

};
#endif // MAINWINDOW_H
