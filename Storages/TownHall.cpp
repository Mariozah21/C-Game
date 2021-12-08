//
// Created by kamil on 17.11.2021.
//

#include "TownHall.h"
TownHall::TownHall() {
    m_id = "TownHall";
    Building b;
    m_buildLevel = b.buildLevel;
    m_storedGold = 0;
    m_storedStone = 0;
    m_storedWood = 0;
    m_maxGold = 150 * m_buildLevel;
    m_maxStone = 150 * m_buildLevel;
    m_maxWood = 150 * m_buildLevel;
}
std::string TownHall::getId (){
    return m_id;
}
int TownHall::getBuildLevel() {
    return m_buildLevel;
}

bool TownHall::checkGoldStorage(int resourceQuantity) {
    if ((resourceQuantity + m_storedGold) < m_maxGold) {
        return true;
    } else {
        return false;
    }
}
bool TownHall::checkStoneStorage(int resourceQuantity) {
    if ((resourceQuantity + m_storedStone) < m_maxStone) {
        return true;
    } else {
        return false;
    }
}
bool TownHall::checkWoodStorage(int resourceQuantity) {
    if ((resourceQuantity + m_storedWood) < m_maxWood) {
        return true;
    } else {
        return false;
    }
}

void TownHall::storeGold(int resourceQuantity) {
    if (TownHall::checkGoldStorage(resourceQuantity) == true){
        m_storedGold += resourceQuantity;
    } else {
        m_storedGold = m_maxGold;
    }
}
void TownHall::storeStone(int resourceQuantity) {
    if (TownHall::checkStoneStorage(resourceQuantity) == true){
        m_storedStone += resourceQuantity;
    } else {
        m_storedStone = m_maxStone;
    }
}
void TownHall::storeWood(int resourceQuantity) {
    if (TownHall::checkWoodStorage(resourceQuantity) == true){
        m_storedWood += resourceQuantity;
    } else {
        m_storedWood = m_maxWood;
    }
}

int TownHall::getGold() {
    return m_storedGold;
}
int TownHall::getStone() {
    return m_storedStone;
}
int TownHall::getWood() {
    return m_storedWood;
}
int TownHall::getMaxGold() {
    return m_maxGold;
}
int TownHall::getMaxStone() {
    return m_maxStone;
}
int TownHall::getMaxWood() {
    return m_maxWood;
}

void TownHall::setLevel() {
    m_buildLevel++;
}