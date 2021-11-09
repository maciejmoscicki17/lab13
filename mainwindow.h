#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QSlider>
#include <QSpinBox>
#include <QPixmap>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    int red=0, green=0, blue=0;
    QSlider sliderRed, sliderGreen, sliderBlue;
    QSpinBox spinBoxRed, spinBoxGreen, spinBoxBlue;
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void setRGB(int a, int b, int c);
    void setRed(int a);
    void setGreen(int a);
    void setBlue(int a);
    QPixmap mapa;


private slots:

    void on_sliderRed_sliderMoved(int position);
    void on_sliderGreen_sliderMoved(int position);
    void on_sliderBlue_sliderMoved(int position);

    void on_spinBoxRed_valueChanged(int arg1);
    void on_spinBoxGreen_valueChanged(int arg1);
    void on_spinBoxBlue_valueChanged(int arg1);

private:
    Ui::MainWindow *ui;
    void koloruj(int r,int g,int b);

};
#endif // MAINWINDOW_H
