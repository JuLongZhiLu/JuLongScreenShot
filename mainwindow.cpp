#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QRect>
#include <QScreen>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    screen = QGuiApplication::primaryScreen();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    screenPixmap = screen->grabWindow(0,0,0,500,500);
    ui->label->setPixmap(screenPixmap);
}

void MainWindow::on_pushButton_2_clicked()
{
    screenPixmap.save("test.png","png");
}

