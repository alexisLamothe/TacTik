#include <QApplication>
#include <QWidget>
#include <QGridLayout>
#include <QLabel>
#include <QPushButton>
#include "MainWindowGame.hpp"

#define MAX_SIZE 14

int main(int argc, char *argv[]) {
    QString imgPATH = "ressource/img";
    QApplication app(argc,argv);

    /*QWidget f1;

    QLabel *tek1 = new QLabel();
    QLabel *tek2 = new QLabel();
    QLabel *tek3 = new QLabel();
    QLabel *tek4 = new QLabel();
    QLabel *tek5 = new QLabel();
    QLabel *tek6 = new QLabel();
    QLabel *tek7 = new QLabel();
    QLabel *tek8 = new QLabel();
    QLabel *tek9 = new QLabel();
    QLabel *tek10 = new QLabel();
    QLabel *tek11 = new QLabel();
    QLabel *tek12 = new QLabel();
    QLabel *tek13 = new QLabel();
    QLabel *tek14 = new QLabel();
    QLabel *tek15 = new QLabel();
    QLabel *tek16 = new QLabel();
    QLabel *tek17 = new QLabel();
    QLabel *tek18 = new QLabel();
    QLabel *tek19 = new QLabel();
    QLabel *tek20 = new QLabel();
    QPixmap t1 = QPixmap(QCoreApplication::applicationDirPath() + "/../"+imgPATH+"/case.png");
    QPixmap t2 = QPixmap(QCoreApplication::applicationDirPath() + "/../"+imgPATH+"/case4.png");
    QPixmap t3 = QPixmap(QCoreApplication::applicationDirPath() + "/../"+imgPATH+"/imagerouge-100px.png");
    QPixmap t4 = QPixmap(QCoreApplication::applicationDirPath() + "/../"+imgPATH+"/imagedemiarrondiinverse-100px.png");
    QPixmap t5 = QPixmap(QCoreApplication::applicationDirPath() + "/../"+imgPATH+"/imagedemiarrondi-100px.png");
    QPixmap t6 = QPixmap(QCoreApplication::applicationDirPath() + "/../"+imgPATH+"/imagedroit-100px.png");

    t1= t1.scaled(QSize(40,40),Qt::IgnoreAspectRatio);
    t2= t2.scaled(QSize(40,40),Qt::IgnoreAspectRatio);
    t3= t3.scaled(QSize(40,40),Qt::IgnoreAspectRatio);
    t4= t4.scaled(QSize(40,40),Qt::IgnoreAspectRatio);
    t5= t5.scaled(QSize(40,40),Qt::IgnoreAspectRatio);
    t6= t6.scaled(QSize(40,40),Qt::IgnoreAspectRatio);
    tek1->setPixmap(t1);
    tek2->setPixmap(t1);
    tek3->setPixmap(t1);
    tek4->setPixmap(t2);
    tek5->setPixmap(t1);
    tek6->setPixmap(t1);
    tek7->setPixmap(t1);
    tek8->setPixmap(t2);
    tek9->setPixmap(t1);
    tek10->setPixmap(t1);
    tek11->setPixmap(t1);
    tek12->setPixmap(t2);
    tek13->setPixmap(t1);
    tek14->setPixmap(t1);
    tek15->setPixmap(t1);
    tek16->setPixmap(t3);
    tek17->setPixmap(t4);
    tek18->setPixmap(t6);
    tek19->setPixmap(t6);
    tek20->setPixmap(t5);


    QGridLayout *layoutGrid = new QGridLayout();
    layoutGrid->setSpacing(0);
    for(int i=1; i<=MAX_SIZE;i++){
        layoutGrid->setColumnMinimumWidth(i,40);
        layoutGrid->setRowMinimumHeight(i,40);
    }
    layoutGrid->addWidget(tek1,12,5);
    layoutGrid->addWidget(tek2,12,4);
    layoutGrid->addWidget(tek3,13,4);
    layoutGrid->addWidget(tek4,14,4);
    layoutGrid->addWidget(tek5,14,3);
    layoutGrid->addWidget(tek6,14,2);
    layoutGrid->addWidget(tek7,13,1);
    layoutGrid->addWidget(tek8,12,1);
    layoutGrid->addWidget(tek9,11,1);
    layoutGrid->addWidget(tek10,10,1);
    layoutGrid->addWidget(tek11,9,1);
    layoutGrid->addWidget(tek12,8,1);
    layoutGrid->addWidget(tek13,8,2);
    layoutGrid->addWidget(tek14,8,3);
    layoutGrid->addWidget(tek15,7,3);


    layoutGrid->addWidget(tek16,12,6);
    layoutGrid->addWidget(tek17,11,6);
    layoutGrid->addWidget(tek18,11,5);
    layoutGrid->addWidget(tek19,11,4);
    layoutGrid->addWidget(tek20,11,3);


    f1.setLayout(layoutGrid);

    f1.show();*/

    MainWindowGame mainWindow(4);
    mainWindow.show();

    return app.exec();
}

