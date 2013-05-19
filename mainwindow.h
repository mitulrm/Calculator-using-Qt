#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QString>
#include <QStack>
#include <QQueue>


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    int findop();
    double calc(double op1, double op2, QString op);
    

private slots:
    void clear();
    void append1();
    void append2();
    void append3();
    void append4();
    void append5();
    void append6();
    void append7();
    void append8();
    void append9();
    void append0();
    void appendpl();
    void appendmi();
    void appendmu();
    void appenddi();
    void appendpo();
    void appenddot();
    void appendsb();
    void appendeb();
    void eval();

private:
    Ui::MainWindow *ui;
    QString s,s1,s2,op,temp,postfix[100];
    int numobj;
    QStack<QString> stck;
    QQueue<QString> queue,postqueue;
    QStack<double> stck2;
    double op1,op2,ans;
    int isop(QString a);
    int isop(QChar a);
    int preced(QString a);
    void convpost();
    int priority(QString a);
    double posteval();
};

#endif // MAINWINDOW_H
