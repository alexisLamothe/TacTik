#include "Square.hpp"
#include <QtGlobal>

Square::Square(int x, int y, QString defaultPathView)
{
    Q_ASSERT(x>=0 && y>=0);
    _x = x;
    _y = y;
    DEFAULT_PATH_VIEW = defaultPathView;
    _current_path_view = DEFAULT_PATH_VIEW;
    _pion = NULL;
}

int Square::getX(){
    return _x;
}

int Square::getY(){
    return _y;
}

QString Square::getPathView(){
    if(_pion == NULL)
        return DEFAULT_PATH_VIEW;
    return _pion->getPathView();
}

void Square::setPion(Pion* const& pion){
    _pion = pion;
}

void Square::removePion(){
    _pion = NULL;
}

