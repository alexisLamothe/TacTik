#ifndef MAIN_WINDOW_GAME
#define MAIN_WINDOW_GAME

#include <QApplication>
#include <QWidget>
#include <QGridLayout>

class MainWindowGame : public QWidget
{
private:
    const int ANGLE_0 = 0;
    const int ANGLE_90 = 1;
    const int ANGLE_180 = 2;
    const int ANGLE_270 = 3;

    int NB_TEAM;

    QString _emptyCaseNormal;
    QString _emptyCase4;
    QString _emptyCaseStart;
    QString _emptyCaseEndLeft;
    QString _emptyCaseEndCenter;
    QString _emptyCaseEndRigth;

public:
    MainWindowGame(int nb_players);
    void createCoinPlateau(QGridLayout *gridLayout, int angle);

};

#endif
