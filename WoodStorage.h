//
// Created by kamil on 22.11.2021.
//

#ifndef ZOOPROJEKT_WOODSTORAGE_H
#define ZOOPROJEKT_WOODSTORAGE_H

class WoodStorage{
    int m_maxStored;
    int m_storedWood;
public:
    WoodStorage ();
    bool checkStorage (int resourceQuantity);
    void storeWood (int resourceQuantity);
};


#endif //ZOOPROJEKT_WOODSTORAGE_H
