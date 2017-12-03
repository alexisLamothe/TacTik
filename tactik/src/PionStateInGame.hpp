#ifndef PION_STATE_IN_GAME
#define PION_STATE_IN_GAME

class PionStateInGame : public IPionState{
public:
    bool canMoveAway(Pion* const& pion, int moveCount) const=0;
    bool canMoveBack(Pion* const& pion, int moveCount) const=0;
    bool canStart(Pion* const& pion, int moveCount) const=0;
    bool isStake() const=0;
    bool canPermute(Pion* const& pion, int moveCount) const=0;
    bool canPermuteWith(Pion* const& pion, Pion* const& pionTarget) const=0;

    void start(Pion* pion) const=0;
    void eaten(Pion* pion) const=0;
    void moveAway(Pion* pion) const=0;
    void moveBack(Pion* pion) const=0;
    void permuteWith(Pion* pion, Pion* const& pionTarget) const=0;
};

#endif
