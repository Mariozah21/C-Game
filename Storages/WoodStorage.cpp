//
// Created by kamil on 22.11.2021.
//

#include "WoodStorage.h"

WoodStorage::WoodStorage() {
    m_id = "WoodStorage";
    Building b;
    m_buildLevel = b.buildLevel;
    m_maxStored = 150;
    m_storedWood = 0;
}

std::string WoodStorage::getId (){
    return m_id;
}
int WoodStorage::getBuildLevel() {
    return m_buildLevel;
}

bool WoodStorage::checkStorage(int resourceQuantity) {
    if ((resourceQuantity + m_storedWood) < m_maxStored) {
        return true;
    } else {
        return false;
    }
}

void WoodStorage::storeWood (int resourceQuantity){
    if (WoodStorage::checkStorage(resourceQuantity)){
        m_storedWood += resourceQuantity;
    } else {
        m_storedWood = m_maxStored;
    }
}

int WoodStorage::getWood() {
    return m_storedWood;
}
int WoodStorage::getMaxStored() {
    return m_maxStored;
}

void WoodStorage::setLevel() {
    m_buildLevel++;
}