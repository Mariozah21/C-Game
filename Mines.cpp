//
// Created by kamil on 17.11.2021.
//

#include "Mines.h"

Mines::Mines() {
    m_id = "";
    resource = 20;
}

void Mines::generateResources(std::string id, int buildLevel) {
    resource *= buildLevel; // výpočet pro generaci Surovin v závislosti na levelu budovy
    /* zavolat metodu, aby se vygenerované suroviny uložili do storage
     * píše to nějaký warning, asi to nevolám dobře*/;
}

int Mines::getResource (){
    return resource;
}