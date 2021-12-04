//
// Created by kamil on 03.12.2021.
//

#include "Storage.h"
Storage::Storage() {
    m_id = "Storage";
}

std::string Storage::getId() {
    return m_id;
}

void Storage::storeResources(int resourceQuantity, std::string id) {
    TownHall townHall;
    Mines mine;
    resourceQuantity = mine.getResource();
    if (id == "GoldMine"){
        if (townHall.checkGoldStorage(resourceQuantity) == true){
            townHall.storeGold(resourceQuantity);
        } else {
            GoldStorage goldStorage;
            goldStorage.storeGold(resourceQuantity);
        }
    }
    if (id == "StoneMine"){
        if (townHall.checkStoneStorage(resourceQuantity) == true){
            townHall.storeStone(resourceQuantity);
        } else {
            StoneStorage stoneStorage;
            stoneStorage.storeStone(resourceQuantity);
        }
    }
    if (id == "LumberMill"){
        if (townHall.checkWoodStorage(resourceQuantity) == true){
            townHall.storeWood(resourceQuantity);
        } else {
            WoodStorage woodStorage;
            woodStorage.storeWood(resourceQuantity);
        }
    }
}