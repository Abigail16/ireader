#ifndef AUTHOR_H
#define AUTHOR_H

#include <QDialog>
#include <QMessageBox>

class AddChapter;
class AddBook;

namespace Ui {
class Author;
}

class Author : public QDialog
{
    Q_OBJECT

public:
    explicit Author(QWidget *parent = nullptr);
    ~Author();

private slots:
    void on_find_clicked();

    void on_fixProfile_clicked();

    void on_add_clicked();

    void on_exit_clicked();

private:
    Ui::Author *ui;
    AddBook *ab;
    AddChapter *ac;
};

#endif // AUTHOR_H
