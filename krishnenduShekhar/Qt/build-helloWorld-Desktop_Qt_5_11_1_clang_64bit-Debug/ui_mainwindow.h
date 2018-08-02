/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout_2;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_3;
    QDateEdit *dobdateEdit;
    QComboBox *statecomboBox;
    QLabel *dobLabel;
    QLabel *addressLabel;
    QLineEdit *ZIPlineEdit;
    QLabel *ZIPcitylabel;
    QLineEdit *addresslineEdit;
    QLabel *statelabel;
    QLineEdit *namelineEdit;
    QLabel *nameLabel;
    QLabel *citylabel;
    QLineEdit *lineEdit;
    QPushButton *savePushButton;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(520, 434);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout_2 = new QGridLayout(centralWidget);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout_3 = new QGridLayout(groupBox);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        dobdateEdit = new QDateEdit(groupBox);
        dobdateEdit->setObjectName(QStringLiteral("dobdateEdit"));
        dobdateEdit->setDateTime(QDateTime(QDate(2001, 1, 1), QTime(0, 0, 0)));

        gridLayout_3->addWidget(dobdateEdit, 3, 1, 1, 5);

        statecomboBox = new QComboBox(groupBox);
        statecomboBox->setObjectName(QStringLiteral("statecomboBox"));

        gridLayout_3->addWidget(statecomboBox, 2, 3, 1, 1);

        dobLabel = new QLabel(groupBox);
        dobLabel->setObjectName(QStringLiteral("dobLabel"));

        gridLayout_3->addWidget(dobLabel, 3, 0, 1, 1);

        addressLabel = new QLabel(groupBox);
        addressLabel->setObjectName(QStringLiteral("addressLabel"));

        gridLayout_3->addWidget(addressLabel, 1, 0, 1, 1);

        ZIPlineEdit = new QLineEdit(groupBox);
        ZIPlineEdit->setObjectName(QStringLiteral("ZIPlineEdit"));

        gridLayout_3->addWidget(ZIPlineEdit, 2, 5, 1, 1);

        ZIPcitylabel = new QLabel(groupBox);
        ZIPcitylabel->setObjectName(QStringLiteral("ZIPcitylabel"));

        gridLayout_3->addWidget(ZIPcitylabel, 2, 4, 1, 1);

        addresslineEdit = new QLineEdit(groupBox);
        addresslineEdit->setObjectName(QStringLiteral("addresslineEdit"));

        gridLayout_3->addWidget(addresslineEdit, 1, 1, 1, 5);

        statelabel = new QLabel(groupBox);
        statelabel->setObjectName(QStringLiteral("statelabel"));

        gridLayout_3->addWidget(statelabel, 2, 2, 1, 1);

        namelineEdit = new QLineEdit(groupBox);
        namelineEdit->setObjectName(QStringLiteral("namelineEdit"));

        gridLayout_3->addWidget(namelineEdit, 0, 1, 1, 5);

        nameLabel = new QLabel(groupBox);
        nameLabel->setObjectName(QStringLiteral("nameLabel"));

        gridLayout_3->addWidget(nameLabel, 0, 0, 1, 1);

        citylabel = new QLabel(groupBox);
        citylabel->setObjectName(QStringLiteral("citylabel"));

        gridLayout_3->addWidget(citylabel, 2, 0, 1, 1);

        lineEdit = new QLineEdit(groupBox);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        gridLayout_3->addWidget(lineEdit, 2, 1, 1, 1);

        savePushButton = new QPushButton(groupBox);
        savePushButton->setObjectName(QStringLiteral("savePushButton"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(savePushButton->sizePolicy().hasHeightForWidth());
        savePushButton->setSizePolicy(sizePolicy);

        gridLayout_3->addWidget(savePushButton, 5, 3, 1, 3);


        gridLayout_2->addWidget(groupBox, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 520, 22));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);
        QWidget::setTabOrder(namelineEdit, addresslineEdit);
        QWidget::setTabOrder(addresslineEdit, lineEdit);
        QWidget::setTabOrder(lineEdit, statecomboBox);
        QWidget::setTabOrder(statecomboBox, ZIPlineEdit);
        QWidget::setTabOrder(ZIPlineEdit, dobdateEdit);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        groupBox->setTitle(QApplication::translate("MainWindow", "Some dude...", nullptr));
        dobLabel->setText(QApplication::translate("MainWindow", "Date of birth", nullptr));
        addressLabel->setText(QApplication::translate("MainWindow", "Address", nullptr));
        ZIPcitylabel->setText(QApplication::translate("MainWindow", "ZIP", nullptr));
        statelabel->setText(QApplication::translate("MainWindow", "State", nullptr));
        nameLabel->setText(QApplication::translate("MainWindow", "Name", nullptr));
        citylabel->setText(QApplication::translate("MainWindow", "City", nullptr));
        savePushButton->setText(QApplication::translate("MainWindow", "Save Dude Details", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
