#ifndef PION
#define PION

#include "IPionState.hpp"
#include "PionStateOut.hpp"
#include "PionStateStake.hpp"
#include "PionStateInGame.hpp"
#include "PionStateInBase.hpp"
#include "PionStateAccomplished.hpp"

#include <QString>

class Pion
{
private:
    IPionState* _currentPionState;
    PionStateOut* _pionStateOut;
    PionStateStake* _pionStateStake;
    PionStateInGame* _pionStateInGame;
    PionStateInBase* _pionStateInBase;
    PionStateAccomplished* _pionStateAccomplished;


public:
    Pion();
    QString getPathView();

};

#endif
