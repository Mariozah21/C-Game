//
// Created by kamil on 17.11.2021.
//

#include "Storage.h"
Storage::Storage (){
    m_storedResources = 0;
}
void Storage::storeResources (int resourceQuantity, std::string id) {
    if (id == "LumberMill"){
        // checkResources pro LumberMill a uložit do WoodStorage

        m_storedResources += resourceQuantity;
    }
    if (id == "GoldMine"){
        // checkResources pro GoldMine a uložit do GoldStore nebo Bank

        m_storedResources += resourceQuantity;
    }
    if (id == "StoneMine"){
        // checkResources pro StoneMine a uložit do StoneStorage

        m_storedResources += resourceQuantity;
    }
/* musí si to vyptat id, aby se podle toho surovina uložila kam má
*  a pak taky z generateResources počet těch surovin, aby to vědělo počet, jaký to má uložit*/
}