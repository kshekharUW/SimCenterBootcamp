#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QString>
#include <QTextDocument>
#include <QDate>
#include <QStringList>
#include <QMessageBox>

typedef struct{
    QString firstName;
    QString lastName;
    QString address;
    QString city;
    QString state;
    QString zip;
    QDate date;
}DATA;

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();


private slots:
    void on_savePushButton_clicked();

    void on_showPushButton_clicked();

private:
    Ui::MainWindow *ui;
    QStringList stateList = {"WA", "CA","OR"};
    DATA mydata;
//    QString outputString = "";
    QTextDocument doc;
    void gatherData();
};

#endif // MAINWINDOW_H
