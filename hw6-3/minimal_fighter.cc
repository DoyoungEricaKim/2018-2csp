#include <iostream>
#include "minimal_fighter.h"
int MinimalFighter::hp() const {
    return mHp;
}

int MinimalFighter::power() const {
    return mPower;
}

FighterStatus MinimalFighter::status() const {
    return mStatus;
}

void MinimalFighter::setHp(int _hp) {
    mHp = _hp;    
}

void MinimalFighter::setStatus() {
    if(mHp > 0)
        mStatus = Alive;
    else
        mStatus = Dead;
}

void MinimalFighter::hit(MinimalFighter *_enemy) {
    setStatus();
    _enemy->setStatus();
    _enemy->mHp -= mPower;
    mHp -= _enemy->mPower;
    setStatus();
    _enemy->setStatus();
}

void MinimalFighter::attack(MinimalFighter *_target) {
    setStatus();
    _target->setStatus();
    _target->mHp -= mPower;
    mPower = 0;
    setStatus();
    _target->setStatus();
}

void MinimalFighter::fight(MinimalFighter *_enemy) {
    setStatus();
    _enemy->setStatus();
    bool again = true;
    while(again) {
        _enemy->mHp -= mPower;
        mHp -= _enemy->mPower;
        setStatus();
        _enemy->setStatus();
        if(mStatus == Dead || _enemy->mStatus == Dead)
            again = false;
    }
}
