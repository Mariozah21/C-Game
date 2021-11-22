//
// Created by kamil on 22.11.2021.
//

#ifndef ZOOPROJEKT_STONESTORAGE_H
#define ZOOPROJEKT_STONESTORAGE_H

class StoneStorage{
    int m_maxStored;
    int m_storedStone;
public:
    StoneStorage ();
    bool checkStorage (int resourceQuantity);
    void storeStone (int resourceQuantity);
};

#endif //ZOOPROJEKT_STONESTORAGE_H
