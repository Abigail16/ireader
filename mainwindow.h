#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QButtonGroup>
#include <QMessageBox>


class Register;
class Author;
class User;

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    QButtonGroup *bg = new QButtonGroup(this);


private slots:
    void on_registerButton_clicked();
    void on_signinButton_clicked();

private:
    Ui::MainWindow *ui;
    Register *reg;
    User *user;
    Author *author;
};

#endif // MAINWINDOW_H
