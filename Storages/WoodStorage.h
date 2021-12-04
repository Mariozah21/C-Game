//
// Created by kamil on 22.11.2021.
//

#ifndef ZOOPROJEKT_WOODSTORAGE_H
#define ZOOPROJEKT_WOODSTORAGE_H
#include "Storage.h"
#include "../Building.h"

class WoodStorage{
    std::string m_id;
    int m_buildLevel;
    int m_maxStored;
    int m_storedWood;
public:
    WoodStorage();
    std::string getId ();
    int getBuildLevel();
    bool checkStorage (int resourceQuantity);
    void storeWood (int resourceQuantity);
    int getWood();
    int getMaxStored();
};


#endif //ZOOPROJEKT_WOODSTORAGE_H
