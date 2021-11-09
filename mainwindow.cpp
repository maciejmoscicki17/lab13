#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QPixmap"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
  // connect(ui->sliderRed,SIGNAL(on_sliderRed_sliderMoved(int)),this,on_sliderRed_sliderMoved(int));

    mapa = QPixmap(ui->colorLabel->width(),ui->colorLabel->height());
    mapa.fill(QColor(0,0,0,255));
    ui->colorLabel->setPixmap(mapa);
    connect(ui->sliderRed,SIGNAL(on_sliderRed_sliderMoved(int)),this,SLOT(on_sliderRed_sliderMoved(int)));
    connect(ui->sliderGreen,SIGNAL(on_sliderGreen_sliderMoved(int)),this,SLOT(on_sliderGreen_sliderMoved(int)));
    connect(ui->sliderBlue,SIGNAL(on_sliderBlue_sliderMoved(int)),this,SLOT(on_sliderBlue_sliderMoved(int)));

}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::setRGB(int a, int b, int c){
    setRed(a);
    setGreen(b);
    setBlue(c);
}
void MainWindow::setRed(int a){
    if(a<0) red=0;
    else if(a>255) red=255;
    else red =a;
}
void MainWindow::setGreen(int a){
    if(a<0) green=0;
    else if(a>255) green=255;
    else green =a;
}
void MainWindow::setBlue(int a){
    if(a<0) blue=0;
    else if(a>255) blue=255;
    else blue = a;
}
void MainWindow::on_sliderRed_sliderMoved(int position)
{
    koloruj(position,green,blue);
}
void MainWindow::on_sliderGreen_sliderMoved(int position)
{
    koloruj(red,position,blue);
}
void MainWindow::on_sliderBlue_sliderMoved(int position)
{
    koloruj(red,green,position);
}
void MainWindow::on_spinBoxRed_valueChanged(int arg1)
{
    koloruj(arg1,green,blue);
}
void MainWindow::on_spinBoxGreen_valueChanged(int arg1)
{
    koloruj(red,arg1,blue);
}
void MainWindow::on_spinBoxBlue_valueChanged(int arg1)
{
    koloruj(red,green,arg1);
}
void MainWindow::koloruj(int r, int g, int b){
    setRGB(r,g,b);
    mapa.fill(QColor(red,green,blue,255));
    ui->colorLabel->setPixmap(mapa);
    ui->spinBoxRed->setValue(red);
    ui->spinBoxGreen->setValue(green);
    ui->spinBoxBlue->setValue(blue);
    ui->sliderRed->setValue(red);
    ui->sliderGreen->setValue(green);
    ui->sliderBlue->setValue(blue);
}

