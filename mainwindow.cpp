#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_pushButtonPlus_clicked()
{
    float result = 0;
    result = ui->txtFirstNum->text().toFloat() + ui->txtSecondNum->text().toFloat();
    ui->txtResult->setText(QString::number(result));
}


void MainWindow::on_pushButtonMinus_clicked()
{
    float result = 0;
    result = ui->txtFirstNum->text().toFloat() - ui->txtSecondNum->text().toFloat();
    ui->txtResult->setText(QString::number(result));
}


void MainWindow::on_pushButtonDivide_clicked()
{
    float result = 0;
    result = ui->txtFirstNum->text().toFloat() / ui->txtSecondNum->text().toFloat();
    ui->txtResult->setText(QString::number(result));
}


void MainWindow::on_pushButton_4_clicked()
{
    float result = 0;
    result = ui->txtFirstNum->text().toFloat() * ui->txtSecondNum->text().toFloat();
    ui->txtResult->setText(QString::number(result));
}

