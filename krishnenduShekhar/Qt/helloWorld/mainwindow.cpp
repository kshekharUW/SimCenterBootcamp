#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->statecomboBox->addItems(stateList);



    ui->firstNamelineEdit->setText("Krish");
    ui->lastNamelineEdit->setText("Shekhar");
    ui->addresslineEdit->setText("2310 NE 48th St");
    ui->citylineEdit->setText("Seattle");
    ui->ZIPlineEdit->setText("98105");

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_savePushButton_clicked()
{
    gatherData();
}

void MainWindow::on_showPushButton_clicked()
{
    QString outputString = mydata.firstName+" "+mydata.lastName+"\n\n";

    outputString.append("Address : ");
    outputString.append(mydata.address);
    outputString.append(", "+mydata.city +", " + mydata.state + ", "+ mydata.zip+"\n\n");

    outputString.append("Date of Birth : ");
    outputString.append(mydata.date.toString());
    ui->outputtextBrowser->setText(outputString);

    this->show();

    QMessageBox Msgbox;
    Msgbox.setText(outputString);
    Msgbox.exec();


}

void MainWindow::gatherData(){
    mydata.firstName = ui->firstNamelineEdit->text();
    mydata.lastName = ui->lastNamelineEdit->text();
    mydata.address = ui->addresslineEdit->text();
    mydata.city = ui->citylineEdit->text();
    mydata.state = ui->statecomboBox->currentText();
    mydata.zip = ui->ZIPlineEdit->text();
    mydata.date = ui->dobdateEdit->date();
//    doc.setHtml(mydata.firstName);
//    ui->outputtextBrowser->setDocument(doc);

}




