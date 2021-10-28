#include "mainwindow.h"
#include "ui_mainwindow.h"

int n1,n2,operation;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->op->setText("");
    n1 = rand()%10+1;
    n2 = rand()%10+1;
    ui->firstNum->setNum(n1);
    ui->secNum->setNum(n2);
    ui->asw->setText("waiting answer...");
}

MainWindow::~MainWindow()
{
    delete ui;
}

int getAsw(int operation)
{
    switch (operation)
    {
        case 1:

            return n1+n2;

        break;

        case 2:

            return n1-n2;

        break;

        case 3:

            return n1*n2;

        break;

       default:

            return 0;
    }

}
void MainWindow::on_confirmButton_clicked()
{
    int correctAsw = getAsw(operation);
    QString str = ui->input->text();
    if(str.length() == 0)
    {
        ui->asw->setText("Empty answer!");
    }
    else
    {
        int UserAsw = str.toInt();
        if(UserAsw == correctAsw)
        {
            ui->asw->setText("Right Answer!!");
        }
        else
        {
            ui->asw->setText("Wrong!");
        }
    }
}


void MainWindow::on_newOpButton_clicked()
{
    ui->asw->setText("waiting answer...");
    ui->input->clear();

    n1 = rand()%10+1;
    n2 = rand()%10+1;

    if(operation == 2)
    {
        while(n1<n2)
        {
            n1 = rand()%10+1;
            n2 = rand()%10+1;
        }
    }

    ui->firstNum->setNum(n1);
    ui->secNum->setNum(n2);
}

void MainWindow::on_sumSelect_clicked()
{
    ui->op->setText("+");
    operation = 1;
}


void MainWindow::on_subSelected_clicked()
{
    ui->op->setText("-");
    operation = 2;
}


void MainWindow::on_multiplicationSelected_clicked()
{
    ui->op->setText("x");
    operation = 3;
}

