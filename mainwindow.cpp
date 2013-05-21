#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPushButton>
#include <QTextEdit>
#include <QString>
#include <QStack>
#include <QQueue>
#include <QtCore/qmath.h>
#include <QPalette>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    setFixedSize(351,340);
    ui->setupUi(this);
    ui->screen->setText("");
    ui->plusButton->setStyleSheet("background-color: red");
    ui->minusButton->setStyleSheet("background-color: red");
    ui->divideButton->setStyleSheet("background-color: red");
    ui->multiplyButton->setStyleSheet("background-color: red");
    ui->powerButton->setStyleSheet("background-color: red");
    ui->oneButton->setStyleSheet("background-color: red");
    ui->twoButton->setStyleSheet("background-color: red");
    ui->threeButton->setStyleSheet("background-color: red");
    ui->fourButton->setStyleSheet("background-color: red");
    ui->fiveButton->setStyleSheet("background-color: red");
    ui->sixButton->setStyleSheet("background-color: red");
    ui->sevenButton->setStyleSheet("background-color: red");
    ui->eightButton->setStyleSheet("background-color: red");
    ui->nineButton->setStyleSheet("background-color: red");
    ui->zeroButton->setStyleSheet("background-color: red");
    ui->pointButton->setStyleSheet("background-color: red");
    ui->sbracketButton->setStyleSheet("background-color: red");
    ui->ebracketButton->setStyleSheet("background-color: red");
    ui->clearButton->setStyleSheet("background-color: red");
    ui->equalButton->setStyleSheet("background-color: red");
    connect(ui->plusButton,SIGNAL(clicked()),this,SLOT(appendpl()));
    connect(ui->minusButton,SIGNAL(clicked()),this,SLOT(appendmi()));
    connect(ui->multiplyButton,SIGNAL(clicked()),this,SLOT(appendmu()));
    connect(ui->divideButton,SIGNAL(clicked()),this,SLOT(appenddi()));
    connect(ui->powerButton,SIGNAL(clicked()),this,SLOT(appendpo()));
    connect(ui->oneButton,SIGNAL(clicked()),this,SLOT(append1()));
    connect(ui->twoButton,SIGNAL(clicked()),this,SLOT(append2()));
    connect(ui->threeButton,SIGNAL(clicked()),this,SLOT(append3()));
    connect(ui->fourButton,SIGNAL(clicked()),this,SLOT(append4()));
    connect(ui->fiveButton,SIGNAL(clicked()),this,SLOT(append5()));
    connect(ui->sixButton,SIGNAL(clicked()),this,SLOT(append6()));
    connect(ui->sevenButton,SIGNAL(clicked()),this,SLOT(append7()));
    connect(ui->eightButton,SIGNAL(clicked()),this,SLOT(append8()));
    connect(ui->nineButton,SIGNAL(clicked()),this,SLOT(append9()));
    connect(ui->zeroButton,SIGNAL(clicked()),this,SLOT(append0()));
    connect(ui->pointButton,SIGNAL(clicked()),this,SLOT(appenddot()));
    connect(ui->sbracketButton,SIGNAL(clicked()),this,SLOT(appendsb()));
    connect(ui->ebracketButton,SIGNAL(clicked()),this,SLOT(appendeb()));
    connect(ui->clearButton,SIGNAL(clicked()),this,SLOT(clear()));
    connect(ui->equalButton,SIGNAL(clicked()),this,SLOT(eval()));

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::clear()
{
    ui->screen->setText("");
}

void MainWindow::appendpl()
{
    s=ui->screen->toPlainText();
    s.append("+");
    ui->screen->setText(s);
    ui->screen->setAlignment(Qt::AlignRight);
}

void MainWindow::appendmi()
{
    s=ui->screen->toPlainText();
    s.append("-");
    ui->screen->setText(s);
    ui->screen->setAlignment(Qt::AlignRight);
}

void MainWindow::appendmu()
{
    s=ui->screen->toPlainText();
    s.append("*");
    ui->screen->setText(s);
    ui->screen->setAlignment(Qt::AlignRight);
}

void MainWindow::appenddi()
{
    s=ui->screen->toPlainText();
    s.append("/");
    ui->screen->setText(s);
    ui->screen->setAlignment(Qt::AlignRight);
}

void MainWindow::appendpo()
{
    s=ui->screen->toPlainText();
    s.append("^");
    ui->screen->setText(s);
    ui->screen->setAlignment(Qt::AlignRight);
}

void MainWindow::append1()
{
    s=ui->screen->toPlainText();
    s.append("1");
    ui->screen->setText(s);
    ui->screen->setAlignment(Qt::AlignRight);
}

void MainWindow::append2()
{
    s=ui->screen->toPlainText();
    s.append("2");
    ui->screen->setText(s);
    ui->screen->setAlignment(Qt::AlignRight);
}

void MainWindow::append3()
{
    s=ui->screen->toPlainText();
    s.append("3");
    ui->screen->setText(s);
    ui->screen->setAlignment(Qt::AlignRight);
}

void MainWindow::append4()
{
    s=ui->screen->toPlainText();
    s.append("4");
    ui->screen->setText(s);
    ui->screen->setAlignment(Qt::AlignRight);
}

void MainWindow::append5()
{
    s=ui->screen->toPlainText();
    s.append("5");
    ui->screen->setText(s);
    ui->screen->setAlignment(Qt::AlignRight);
}

void MainWindow::append6()
{
    s=ui->screen->toPlainText();
    s.append("6");
    ui->screen->setText(s);
    ui->screen->setAlignment(Qt::AlignRight);
}

void MainWindow::append7()
{
    s=ui->screen->toPlainText();
    s.append("7");
    ui->screen->setText(s);
    ui->screen->setAlignment(Qt::AlignRight);
}

void MainWindow::append8()
{
    s=ui->screen->toPlainText();
    s.append("8");
    ui->screen->setText(s);
    ui->screen->setAlignment(Qt::AlignRight);
}

void MainWindow::append9()
{
    s=ui->screen->toPlainText();
    s.append("9");
    ui->screen->setText(s);
    ui->screen->setAlignment(Qt::AlignRight);
}

void MainWindow::append0()
{
    s=ui->screen->toPlainText();
    s.append("0");
    ui->screen->setText(s);
    ui->screen->setAlignment(Qt::AlignRight);
}

void MainWindow::appenddot()
{
    s=ui->screen->toPlainText();
    s.append(".");
    ui->screen->setText(s);
    ui->screen->setAlignment(Qt::AlignRight);
}

void MainWindow::appendsb()
{
    s=ui->screen->toPlainText();
    s.append("(");
    ui->screen->setText(s);
    ui->screen->setAlignment(Qt::AlignRight);
}

void MainWindow::appendeb()
{
    s=ui->screen->toPlainText();
    s.append(")");
    ui->screen->setText(s);
    ui->screen->setAlignment(Qt::AlignRight);
}

void MainWindow::eval()
{
    s=ui->screen->toPlainText();
    int len=s.size();
    int x,y=0,z=0,flag=0;
    numobj=0;
    temp="";
    /*int pos=findop();
    int pos1=pos+1;
    s1=s.mid(0,pos);
    s2=s.mid(pos1,len-1);
    op1=s1.toDouble();
    op2=s2.toDouble();
    ans=calc(op1,op2,s[pos]);
    */

    for(x=0;y<len;x++)
    {
        flag=0;
        temp="";
        for(y=z;y<len;y++)
        {
            if(isop(s.at(y)))
            {
                if(temp=="")
                {
                    temp=(QString)s.at(y);
                    z=++y;
                    break;
                }

                if(temp!="")
                {
                    z=y;
                    break;
                }
            }
            else
            {
               temp.append((QString)s.at(y));
            }
        }
        queue.enqueue(temp);
    }
    numobj=x-1;
    convpost();
    ans=posteval();
    s=QString::number(ans,'g',8);
    ui->screen->setText(s);
    ui->screen->setAlignment(Qt::AlignRight);
}

int MainWindow::isop(QString a)
{
    if(a=="+"||a=="-"||a=="*"||a=="/"||a=="^"||a=="("||a==")")
        return 1;
    else
        return 0;
}

int MainWindow::isop(QChar a)
{
    if(a=='+'||a=='-'||a=='*'||a=='/'||a=='^'||a=='('||a==')')
        return 1;
    else
        return 0;
}

int MainWindow::preced(QString a)
{
    if(a=="+"||a=="-")
        return 1;
    if(a=="*"||a=="/")
        return 2;
    if(a=="^")
        return 3;
}

int MainWindow::priority(QString a)
{
    if(stck.isEmpty())
        return 1;
    if(preced(a)>preced(stck.top()))
        return 1;
    if(preced(a)<preced(stck.top()))
        return 0;
    if(preced(a)==preced(stck.top()))
    {
        if(preced(a)==3)
            return 1;
        else
            return 0;
    }
}

void MainWindow::convpost()
{
   // int j=0;
    for(int i=0;i<=numobj;i++)
    {
        temp=queue.dequeue();
        if(!isop(temp))
        {
         postqueue.enqueue(temp);
         continue;
        }
        if(temp==")")
        {
            while(stck.top()!="(")
                postqueue.enqueue(stck.pop());
            stck.pop();
            continue;
        }
        if(priority(temp)||temp=="(")
        {
            stck.push(temp);
            continue;
        }
        if(!priority(temp))
        {
            while(!priority(temp))
                postqueue.enqueue(stck.pop());
            stck.push(temp);
        }

    }
    while(!stck.isEmpty())
        postqueue.enqueue(stck.pop());
 //   numobj=j-1;
}

/*int MainWindow::findop(QString a)
{
    int n=s.indexOf("+",0);
    if(n==-1)
        n=s.indexOf("-",0);
    if(n==-1)
        n=s.indexOf("*",0);
    if(n==-1)
        n=s.indexOf("/",0);
    if(n==-1)
        n=s.indexOf("^",0);

    return n;

}*/

double MainWindow::calc(double op1, double op2, QString op)
{
    if(op=="+")
        return(op1+op2);

    else if(op=="-")
        return(op1-op2);

    else if(op=="*")
        return(op1*op2);

    else if(op=="/")
        return(op1/op2);

    else if(op=="^")
        return(qPow(op1,op2));
}


double MainWindow::posteval()
{
    for(int i=0;!postqueue.isEmpty();i++)
    {
        temp=postqueue.dequeue();
        if(!isop(temp))
        {
                stck2.push(temp.toDouble());
                continue;
        }

        if(isop(temp))
        {
            op2=stck2.pop();
            op1=stck2.pop();
            ans=calc(op1,op2,temp);
            stck2.push(ans);
        }
    }
    ans=stck2.pop();
    return(ans);
}
