#ifndef ADDCHAPTER_H
#define ADDCHAPTER_H

#include <QDialog>

namespace Ui {
class AddChapter;
}

class AddChapter : public QDialog
{
    Q_OBJECT

public:
    explicit AddChapter(QWidget *parent = nullptr);
    ~AddChapter();

private slots:
    void on_buttonBox_accepted();

private:
    Ui::AddChapter *ui;
};

#endif // ADDCHAPTER_H
