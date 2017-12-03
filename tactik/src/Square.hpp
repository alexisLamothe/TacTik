#ifndef _SQUARE_
#define _SQUARE_

#include <QString>
#include "Pion.hpp"

class Square
{
private:
    QString DEFAULT_PATH_VIEW;
    int _x;
    int _y;
    Pion* _pion;

public:
    Square(int x, int y, QString defaultPathView);
    int getX();
    int getY();
    // test : vérifier const&
    void setPion(Pion* const& pion);
    void removePion();

    QString getPathView();
};

#endif
