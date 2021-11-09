/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QGridLayout *gridLayout;
    QSpinBox *spinBoxRed;
    QLabel *label;
    QLabel *label_2;
    QSpinBox *spinBoxBlue;
    QSpinBox *spinBoxGreen;
    QLabel *label_3;
    QSlider *sliderBlue;
    QSlider *sliderRed;
    QSlider *sliderGreen;
    QLabel *colorLabel;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(440, 200);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        horizontalLayoutWidget = new QWidget(centralwidget);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(30, 30, 301, 92));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        spinBoxRed = new QSpinBox(horizontalLayoutWidget);
        spinBoxRed->setObjectName(QString::fromUtf8("spinBoxRed"));
        spinBoxRed->setMaximum(255);

        gridLayout->addWidget(spinBoxRed, 0, 2, 1, 1);

        label = new QLabel(horizontalLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_2 = new QLabel(horizontalLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        spinBoxBlue = new QSpinBox(horizontalLayoutWidget);
        spinBoxBlue->setObjectName(QString::fromUtf8("spinBoxBlue"));
        spinBoxBlue->setMaximum(255);

        gridLayout->addWidget(spinBoxBlue, 2, 2, 1, 1);

        spinBoxGreen = new QSpinBox(horizontalLayoutWidget);
        spinBoxGreen->setObjectName(QString::fromUtf8("spinBoxGreen"));
        spinBoxGreen->setMaximum(255);

        gridLayout->addWidget(spinBoxGreen, 1, 2, 1, 1);

        label_3 = new QLabel(horizontalLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        sliderBlue = new QSlider(horizontalLayoutWidget);
        sliderBlue->setObjectName(QString::fromUtf8("sliderBlue"));
        sliderBlue->setCursor(QCursor(Qt::CrossCursor));
        sliderBlue->setMaximum(255);
        sliderBlue->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(sliderBlue, 2, 1, 1, 1);

        sliderRed = new QSlider(horizontalLayoutWidget);
        sliderRed->setObjectName(QString::fromUtf8("sliderRed"));
        sliderRed->setCursor(QCursor(Qt::CrossCursor));
        sliderRed->setMaximum(255);
        sliderRed->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(sliderRed, 0, 1, 1, 1);

        sliderGreen = new QSlider(horizontalLayoutWidget);
        sliderGreen->setObjectName(QString::fromUtf8("sliderGreen"));
        sliderGreen->setCursor(QCursor(Qt::CrossCursor));
        sliderGreen->setMaximum(255);
        sliderGreen->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(sliderGreen, 1, 1, 1, 1);


        horizontalLayout->addLayout(gridLayout);

        colorLabel = new QLabel(horizontalLayoutWidget);
        colorLabel->setObjectName(QString::fromUtf8("colorLabel"));
        colorLabel->setMinimumSize(QSize(90, 90));
        colorLabel->setMaximumSize(QSize(90, 90));
        colorLabel->setFrameShape(QFrame::Box);

        horizontalLayout->addWidget(colorLabel);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 440, 20));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "mieszalnik", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Red", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Green", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Blue", nullptr));
        colorLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
