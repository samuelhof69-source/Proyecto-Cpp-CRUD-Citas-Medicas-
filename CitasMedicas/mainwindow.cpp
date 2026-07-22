#include "mainwindow.h"
#include "./ui_mainwindow.h"
int generarID()
{
    return 1000 + rand() % 9000;
}

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

void MainWindow::on_btnCrear_clicked()
{

    Citas cita;









}

