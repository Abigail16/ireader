#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "author.h"
#include "user.h"
#include "register.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    bg->addButton(ui->userButton,0);
    bg->addButton(ui->author,1);

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_registerButton_clicked()
{
    reg = new Register(this);
    reg->show();
}

void MainWindow::on_signinButton_clicked()
{
    int select = bg->checkedId();
    switch(select)
    {
        case 0:
            //if();登录成功
                user = new User();
                user->show();
            //else QMessageBox::information(this, tr("Error"), "Username or password failed!");
            break;
        case 1:
            //if();登录成功
            author = new Author();
            author->show();
            //else QMessageBox::information(this, tr("Error"), "Username or password failed!");
            break;
        default:
            QMessageBox::information(this, tr("Warning"), "You need to choose user or author!");
            break;
    }

}

