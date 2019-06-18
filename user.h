#ifndef USER_H
#define USER_H

#include <QSpinBox>
#include <QDialog>
#include <QMessageBox>



namespace Ui {
class User;
}

class User : public QDialog
{
    Q_OBJECT

public:
    explicit User(QWidget *parent = nullptr);
    ~User();


private slots:
    void on_findButton_clicked();
    void on_moneyButton_clicked();

    void on_cmtButton_clicked();

    void on_exit_clicked();

private:
    Ui::User *ui;
};

#endif // USER_H
