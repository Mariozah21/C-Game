//
// Created by kamil on 22.11.2021.
//

#ifndef ZOOPROJEKT_GOLDSTORAGE_H
#define ZOOPROJEKT_GOLDSTORAGE_H

class GoldStorage{
 int m_maxStored;
 int m_storedGold;
public:
    GoldStorage ();
    bool checkStorage (int resourceQuantity);
    void storeGold (int resourceQuantity);
};


#endif //ZOOPROJEKT_GOLDSTORAGE_H
