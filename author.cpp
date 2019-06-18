#include "author.h"
#include "ui_author.h"

#include "addbook.h"
#include "addchapter.h"

Author::Author(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Author)
{
    ui->setupUi(this);
    //数据库获取简介并显示
//    QString str =
//    ui->profile->setText(str);

}

Author::~Author()
{
    delete ui;
}


void Author::on_find_clicked()
{
    QString fineText = ui->findText->text();//查找内容
    QString fineContext = ui->comboBox->currentText();//查找类型
    if(QString::compare(fineContext, "我的粉丝")) {
       //数据库查找
    }
    else if(QString::compare(fineContext, "我的书籍")) {

    }
    else if(QString::compare(fineContext, "收藏此书的用户")) {

    }
    else if(QString::compare(fineContext, "我的信息")) {

    }
    else{
        QMessageBox::information(this, tr("Error"), "Please choose one!");
    }
}

void Author::on_fixProfile_clicked()
{
    QString text = ui->profile->toPlainText();
    //数据库修改更新简介
}

void Author::on_add_clicked()
{
    int addContext = ui->addContext->currentIndex();//查找类型

    if(addContext == 0) {
        ab = new AddBook();
        ab->show();
    }
    else if(addContext == 1) {
        ac = new AddChapter();
        ac->show();
    }
    else {
        QMessageBox::information(this, tr("Error"), "Please choose one!");
    }
}

void Author::on_exit_clicked()
{
   this->close();
}
