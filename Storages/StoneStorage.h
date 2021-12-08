//
// Created by kamil on 22.11.2021.
//

#ifndef ZOOPROJEKT_STONESTORAGE_H
#define ZOOPROJEKT_STONESTORAGE_H
#include "Storage.h"
#include "../Building.h"

class StoneStorage{
    std::string m_id;
    int m_buildLevel;
    int m_maxStored;
    int m_storedStone;
public:
    StoneStorage();

    std::string getId();

    int getBuildLevel();

    bool checkStorage(int resourceQuantity);

    void storeStone(int resourceQuantity);
    int getStone();
    int getMaxStored();
    void setLevel();
};

#endif //ZOOPROJEKT_STONESTORAGE_H
