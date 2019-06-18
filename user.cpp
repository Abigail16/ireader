#include "user.h"
#include "ui_user.h"


User::User(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::User)
{
    ui->setupUi(this);
    ui->score->setMaximum(10);
}

User::~User()
{
    delete ui;
}

void User::on_findButton_clicked()
{
    QString fineText = ui->findText->text();//查找内容
    int fineContext = ui->comboBox->currentIndex();//查找类型
    if(fineContext == 0) {//书籍
       //数据库查找
    }
    else if(fineContext == 1) {//作者

    }
    else if(fineContext == 2) {//喜爱的作者

    }
    else if(fineContext == 3) {//收藏的书籍

    }
    else if(fineContext == 4) {//我的评论

    }
    else if(fineContext == 5) {//我的信息

    }
    else if(fineContext == 6) {//收藏书籍排名前十

    }
    else if(fineContext == 7) {//评分书籍排名前十

    }
    else if(fineContext == 8) {//人气作者排名前十

    }
    else if(fineContext == 9) {//作者总积分排名前十

    }
    else{
        QMessageBox::information(this, tr("Error"), "Please choose one!");
    }
}

void User::on_moneyButton_clicked()
{
     int money = ui->money->value();
     //数据库添加钱钱
}

void User::on_cmtButton_clicked()
{
    int score = ui->score->value();
    QString text = ui->comment->toPlainText();
    if(score == 0 && text == nullptr)
        QMessageBox::information(this, tr("Error"), "Please write comment and score>0!");
    //else 填入数据库

}

void User::on_exit_clicked()
{
    this->close();
}
