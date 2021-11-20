//
// Created by kamil on 17.11.2021.
//

#include "Mines.h"

void Mines::generateResources(std::string id) {
    int resource = 1;
    Storage* storage;
    resource *= m_buildLevel; // výpočet pro generaci Surovin v závislosti na levelu budovy
    storage -> Storage::storeResources(resource, id)
    /* zavolat metodu, aby se vygenerované suroviny uložili do storage
     * píše to nějaký warning, asi to nevolám dobře*/;
     
    // musí se odčečíst populace potřebná pro vygenerování suroviny v závislosti na level budovi
}