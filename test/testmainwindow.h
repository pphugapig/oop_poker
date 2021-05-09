#ifndef TESTMAINWINDOW_H
#define TESTMAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class testMainWindow; }
QT_END_NAMESPACE

class testMainWindow : public QMainWindow
{
    Q_OBJECT

public:
    testMainWindow(QWidget *parent = nullptr);
    ~testMainWindow();

private slots:
//    void on_pushButton_clicked();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::testMainWindow *ui;
};
#endif // TESTMAINWINDOW_H
