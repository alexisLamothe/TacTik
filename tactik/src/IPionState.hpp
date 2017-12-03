#ifndef I_PION_SATE
#define I_PION_SATE

#include "Pion.cpp"

/*
 * IPionSate est l'interface qui décrit l'état d'un pion
 * Les différentes actions diffères selon l'état dans lequel se trouve un pion
 * Est une implémentation du pattern State
 */
class IPionState{
    public:
        virtual bool canMoveAway(Pion* const& pion, int moveCount) const=0;
        virtual bool canMoveBack(Pion* const& pion, int moveCount) const=0;
        virtual bool canStart(Pion* const& pion, int moveCount) const=0;
        virtual bool isStake() const=0;
        virtual bool canPermute(Pion* const& pion, int moveCount) const=0;
        virtual bool canPermuteWith(Pion* const& pion, Pion* const& pionTarget) const=0;

        virtual void start(Pion* pion) const=0;
        virtual void eaten(Pion* pion) const=0;
        virtual void moveAway(Pion* pion) const=0;
        virtual void moveBack(Pion* pion) const=0;
        virtual void permuteWith(Pion* pion, Pion* const& pionTarget) const=0;

        // autre ?
};

#endif
