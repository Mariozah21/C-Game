//
// Created by kamil on 22.11.2021.
//

#include "GoldStorage.h"

GoldStorage::GoldStorage() {
    m_id = "GoldStorage";
    m_storedGold = 0;
    m_maxStored = 150;
    Building b;
    m_buildLevel = b.buildLevel;
}

std::string GoldStorage::getId() {
    return m_id;
}


int GoldStorage::getBuildLevel() {
    return m_buildLevel;
}

bool GoldStorage::checkStorage(int resourceQuantity) {
    if ((resourceQuantity + m_storedGold) < m_maxStored) {
        return true;
    } else {
        return false;
    }
}

void GoldStorage::storeGold(int resourceQuantity) {
    if (GoldStorage::checkStorage(resourceQuantity) == true) {
        m_storedGold += resourceQuantity;
    } else {
        m_storedGold = m_maxStored;
    }
}

int GoldStorage::getGold() {
    return m_storedGold;
}

int GoldStorage::getMaxStored() {
    return m_maxStored;
}

void GoldStorage::setLevel() {
    m_buildLevel++;
}