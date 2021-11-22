//
// Created by kamil on 17.11.2021.
//

#include "Storage.h"

void Storage::storeResources(int resourceQuantity, std::string id) {
    if (id == "LumberMill") {
        Mines mines;
        resourceQuantity = mines.getResource();
        WoodStorage woodStorage;
        woodStorage.storeWood(resourceQuantity);
        }

    if (id == "GoldMine") {
        Mines mines;
        resourceQuantity = mines.getResource();
        GoldStorage goldStorage;
        goldStorage.storeGold(resourceQuantity);
    }
    if (id == "StoneMine") {
        Mines mines;
        resourceQuantity = mines.getResource();
        StoneStorage stoneStorage;
        stoneStorage.storeStone(resourceQuantity);
    }
/* musí si to vyptat id, aby se podle toho surovina uložila kam má
*  a pak taky z generateResources počet těch surovin, aby to vědělo počet, jaký to má uložit*/
}