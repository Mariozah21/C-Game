//
// Created by kamil on 22.11.2021.
//

#include "StoneStorage.h"

StoneStorage::StoneStorage(){
    m_id = "StoneStorage";
    Building b;
    m_buildLevel = b.buildLevel;
    m_maxStored = 150;
    m_storedStone = 0;
}

std::string StoneStorage::getId (){
    return m_id;
}
int StoneStorage::getBuildLevel() {
    return m_buildLevel;
}

bool StoneStorage::checkStorage(int resourceQuantity) {
    if ((resourceQuantity + m_storedStone) < m_maxStored) {
        return true;
    } else {
        return false;
    }
}

void StoneStorage::storeStone (int resourceQuantity){
    if (StoneStorage::checkStorage(resourceQuantity)){
        m_storedStone += resourceQuantity;
    } else {
        m_storedStone = m_maxStored;
    }
}
int StoneStorage::getStone() {
    return m_storedStone;
}
int StoneStorage::getMaxStored() {
    return m_maxStored;
}