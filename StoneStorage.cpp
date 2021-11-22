//
// Created by kamil on 22.11.2021.
//

#include "StoneStorage.h"

StoneStorage::StoneStorage() {
    m_maxStored = 150;
    m_storedStone = 0;
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