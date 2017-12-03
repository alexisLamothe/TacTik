#include "MainWindowGame.hpp"
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QPushButton>
#include <QLabel>
#include <QtGlobal>

#define IMG_PATH "ressource/img"

MainWindowGame::MainWindowGame(int nb_players): QWidget() {
    Q_ASSERT( nb_players > 2 && nb_players % 2 == 0 );
    NB_TEAM = nb_players;

    _emptyCaseNormal = QCoreApplication::applicationDirPath() + "/../"+IMG_PATH+"/case.png";
    _emptyCase4 = QCoreApplication::applicationDirPath() + "/../"+IMG_PATH+"/case4.png";
    _emptyCaseStart = QCoreApplication::applicationDirPath() + "/../"+IMG_PATH+"/starter-100px.png";
    _emptyCaseEndLeft = QCoreApplication::applicationDirPath() + "/../"+IMG_PATH+"/imagedemiarrondiinverse-100px.png";
    _emptyCaseEndCenter = QCoreApplication::applicationDirPath() + "/../"+IMG_PATH+"/imagedroit-100px.png";
    _emptyCaseEndRigth = QCoreApplication::applicationDirPath() + "/../"+IMG_PATH+"/imagedemiarrondi-100px.png";

    // MAIN V LAYOUT (V BOX) => permet en autre de fixé la taille du plateau lors de l'agrandissement verticale
    QVBoxLayout *mainVLayout = new QVBoxLayout(this);

    // CARDS H LAYOUT (H BOX) => permet d'afficher les carte du jeu (localisé en dessous du plateau)
    QHBoxLayout *cardsLayout = new QHBoxLayout();
    QPushButton *card1 = new QPushButton("1");
    card1->setMinimumHeight(130);
    card1->setMaximumWidth(100);
    QPushButton *card2 = new QPushButton("10");
    card2->setMinimumHeight(130);
    card2->setMaximumWidth(100);
    QPushButton *card3 = new QPushButton("-4");
    card3->setMinimumHeight(130);
    card3->setMaximumWidth(100);
    QPushButton *card4 = new QPushButton("5");
    card4->setMinimumHeight(130);
    card4->setMaximumWidth(100);
    QPushButton *card5 = new QPushButton("8");
    card5->setMinimumHeight(130);
    card5->setMaximumWidth(100);
    QPushButton *card6 = new QPushButton("P");
    card6->setMinimumHeight(130);
    card6->setMaximumWidth(100);
    cardsLayout->addWidget(card1);
    cardsLayout->addWidget(card2);
    cardsLayout->addWidget(card3);
    cardsLayout->addWidget(card4);
    cardsLayout->addWidget(card5);
    cardsLayout->addWidget(card6);


    // MAIN H LAYOUT (H BOX)
    QHBoxLayout *mainHLayout = new QHBoxLayout();

    QPushButton *something_left = new QPushButton("");// Quelque chose ici
    QGridLayout *plateau_center = new QGridLayout();
    QPushButton *something_rigth = new QPushButton("");// Quelque chose d\'autre là

    createCoinPlateau(plateau_center, ANGLE_0);
    createCoinPlateau(plateau_center, ANGLE_90);
    createCoinPlateau(plateau_center, ANGLE_180);
    createCoinPlateau(plateau_center, ANGLE_270);

    mainVLayout->addLayout(mainHLayout);
    mainVLayout->addLayout(cardsLayout);
    mainHLayout->addWidget(something_left);
    mainHLayout->addLayout(plateau_center);
    mainHLayout->addWidget(something_rigth);
}

void MainWindowGame::createCoinPlateau(QGridLayout *gridLayout, int angle){
    QLabel* emptyCaseLabelList[20];
    //20
    for(int i=0;i<20;++i) {
        emptyCaseLabelList[i] = new QLabel();
    }
    QPixmap pixmapCaseNormal = QPixmap(_emptyCaseNormal);
    QPixmap pixmapCase4 = QPixmap(_emptyCase4);
    QPixmap pixmapCaseStart = QPixmap(_emptyCaseStart);
    QPixmap pixmapCaseEndLeft = QPixmap(_emptyCaseEndLeft);
    QPixmap pixmapCaseCenter = QPixmap(_emptyCaseEndCenter);
    QPixmap pixmapCaseEndRigth = QPixmap(_emptyCaseEndRigth);

    pixmapCaseNormal = pixmapCaseNormal.scaled(QSize(40,40),Qt::IgnoreAspectRatio);
    pixmapCase4 = pixmapCase4.scaled(QSize(40,40),Qt::IgnoreAspectRatio);
    pixmapCaseStart = pixmapCaseStart.scaled(QSize(40,40),Qt::IgnoreAspectRatio);
    pixmapCaseEndLeft = pixmapCaseEndLeft.scaled(QSize(40,40),Qt::IgnoreAspectRatio);
    pixmapCaseCenter = pixmapCaseCenter.scaled(QSize(40,40),Qt::IgnoreAspectRatio);
    pixmapCaseEndRigth = pixmapCaseEndRigth.scaled(QSize(40,40),Qt::IgnoreAspectRatio);

    QTransform rotateImg;
    switch(angle) {
        case 1 :
            rotateImg.rotate(90);
            break;
        case 2 :
            rotateImg.rotate(180);
            break;
        case 3 :
            rotateImg.rotate(270);
            break;
        default :
            break;
    }
    if(angle == ANGLE_90 || angle == ANGLE_180 || angle == ANGLE_270) {
        pixmapCaseEndLeft = pixmapCaseEndLeft.transformed(rotateImg);
        pixmapCaseCenter = pixmapCaseCenter.transformed(rotateImg);
        pixmapCaseEndRigth = pixmapCaseEndRigth.transformed(rotateImg);
    }

    emptyCaseLabelList[0]->setPixmap(pixmapCaseNormal);
    emptyCaseLabelList[1]->setPixmap(pixmapCaseNormal);
    emptyCaseLabelList[2]->setPixmap(pixmapCaseNormal);
    emptyCaseLabelList[3]->setPixmap(pixmapCase4);
    emptyCaseLabelList[4]->setPixmap(pixmapCaseNormal);
    emptyCaseLabelList[5]->setPixmap(pixmapCaseNormal);
    emptyCaseLabelList[6]->setPixmap(pixmapCaseNormal);
    emptyCaseLabelList[7]->setPixmap(pixmapCase4);
    emptyCaseLabelList[8]->setPixmap(pixmapCaseNormal);
    emptyCaseLabelList[9]->setPixmap(pixmapCaseNormal);
    emptyCaseLabelList[10]->setPixmap(pixmapCaseNormal);
    emptyCaseLabelList[11]->setPixmap(pixmapCase4);
    emptyCaseLabelList[12]->setPixmap(pixmapCaseNormal);
    emptyCaseLabelList[13]->setPixmap(pixmapCaseNormal);
    emptyCaseLabelList[14]->setPixmap(pixmapCaseNormal);
    emptyCaseLabelList[15]->setPixmap(pixmapCaseStart);
    emptyCaseLabelList[16]->setPixmap(pixmapCaseEndLeft);
    emptyCaseLabelList[17]->setPixmap(pixmapCaseCenter);
    emptyCaseLabelList[18]->setPixmap(pixmapCaseCenter);
    emptyCaseLabelList[19]->setPixmap(pixmapCaseEndRigth);

    gridLayout->setSpacing(0);//14
    for(int i=0; i<14;++i){
        gridLayout->setColumnMinimumWidth(i,40);
        gridLayout->setRowMinimumHeight(i,40);
    }

    int coordX[20];
    int coordY[20];

    coordX[0] = 11;
    coordX[1] = 11;
    coordX[2] = 12;
    coordX[3] = 13;
    coordX[4] = 13;
    coordX[5] = 13;
    coordX[6] = 12;
    coordX[7] = 11;
    coordX[8] = 10;
    coordX[9] = 9;
    coordX[10] = 8;
    coordX[11] = 7;
    coordX[12] = 7;
    coordX[13] = 7;
    coordX[14] = 6;
    coordX[15] = 11;
    coordX[16] = 10;
    coordX[17] = 10;
    coordX[18] = 10;
    coordX[19] = 10;

    coordY[0] = 5;
    coordY[1] = 4;
    coordY[2] = 4;
    coordY[3] = 4;
    coordY[4] = 3;
    coordY[5] = 2;
    coordY[6] = 1;
    coordY[7] = 1;
    coordY[8] = 1;
    coordY[9] = 1;
    coordY[10] = 1;
    coordY[11] = 1;
    coordY[12] = 2;
    coordY[13] = 3;
    coordY[14] = 3;
    coordY[15] = 6;
    coordY[16] = 6;
    coordY[17] = 5;
    coordY[18] = 4;
    coordY[19] = 3;


    // test something (couleur) => marche mais sortir de la méthode
    QPalette palette = QPalette();
    palette.setColor(QPalette::Background,Qt::red);
    emptyCaseLabelList[15]->setAutoFillBackground(true);
    emptyCaseLabelList[15]->setPalette(palette);

    // 20 / 14
    for(int i=0; i<20; ++i) {
        switch (angle) {
            case 0 :
                gridLayout->addWidget(emptyCaseLabelList[i],coordX[i],coordY[i]);
                break;
            case 1 :
                gridLayout->addWidget(emptyCaseLabelList[i],14-(14-coordY[i]+1),(14-coordX[i]-1)+1);
                break;
            case 2 :
                gridLayout->addWidget(emptyCaseLabelList[i],14-coordX[i]-1,14-coordY[i]+1);
                break;
            case 3 :
                gridLayout->addWidget(emptyCaseLabelList[i],14-coordY[i],coordX[i]+1);
                break;
            default:
                break;
        }
    }
}
