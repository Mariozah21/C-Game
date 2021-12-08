//
// Created by kamil on 22.11.2021.
//

#ifndef ZOOPROJEKT_GOLDSTORAGE_H
#define ZOOPROJEKT_GOLDSTORAGE_H
#include "Storage.h"
#include "../Building.h"

class GoldStorage{
    std::string m_id;
    int m_buildLevel;
    int m_maxStored;
    int m_storedGold;
public:
    GoldStorage();
    std::string getId();
    int getBuildLevel ();
    bool checkStorage(int resourceQuantity);
    void storeGold(int resourceQuantity);
    int getGold();
    int getMaxStored();
    void setLevel();
};


#endif //ZOOPROJEKT_GOLDSTORAGE_H
