#include "addchapter.h"
#include "ui_addchapter.h"

AddChapter::AddChapter(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddChapter)
{
    ui->setupUi(this);
    //我的书籍显示在comboBox上
}

AddChapter::~AddChapter()
{
    delete ui;
}

void AddChapter::on_buttonBox_accepted()
{
    QString text = ui->chapterText->toPlainText();
    QString name = ui->chapterName->text();
    QString bookName = ui->comboBox->currentText();
    //填入数据库
}
