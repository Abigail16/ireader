#include "addbook.h"
#include "ui_addbook.h"


AddBook::AddBook(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddBook)
{
    ui->setupUi(this);
    //数据库中提取类别 显示类别
}

AddBook::~AddBook()
{
    delete ui;
}


void AddBook::on_buttonBox_accepted()
{
    QString context = ui->comboBox->currentText();//类别
    QString name = ui->bookName->text();//名字
    //加入数据库
}

