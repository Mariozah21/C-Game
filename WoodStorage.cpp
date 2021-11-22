//
// Created by kamil on 22.11.2021.
//

#include "WoodStorage.h"

WoodStorage::WoodStorage() {
    m_maxStored = 150;
    m_storedWood = 0;
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