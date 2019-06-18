#include "register.h"
#include "ui_register.h"



Register::Register(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Register)
{
    ui->setupUi(this);
}

Register::~Register()
{
    delete ui;
}

void Register::on_buttonBox_accepted()
{
    QString nickname = ui->nickname->text();
    QString username = ui->username->text();
    QString password = ui->password->text();

    //数据库添加
    //如果存在，则警告，不存在则添加
    //if() QMessageBox::information(this, tr("Error"), "Username have existed!");
}


