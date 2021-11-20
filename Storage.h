//
// Created by kamil on 17.11.2021.
//

#ifndef ZOOPROJEKT_STORAGE_H
#define ZOOPROJEKT_STORAGE_H
#include <iostream>

class Storage {
    std::string m_id;
    int m_storedResources;
public:
    Storage ();
    void storeResources (int resourceQuantity, std::string id);
};


#endif //ZOOPROJEKT_STORAGE_H
