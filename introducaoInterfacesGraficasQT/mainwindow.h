#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    void on_confirmButton_clicked();

    void on_newOpButton_clicked();

    void on_sumSelect_clicked();

    void on_subSelected_clicked();

    void on_multiplicationSelected_clicked();


private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
