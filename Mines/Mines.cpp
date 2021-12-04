//
// Created by kamil on 17.11.2021.
//

#include "Mines.h"

Mines::Mines() {
    m_id = "Mines";
    resource = 20;
}

std::string Mines::getId() {
    return m_id;
}

void Mines::generateResources(std::string id, int buildLevel) {
    resource *= buildLevel; // výpočet pro generaci Surovin v závislosti na levelu budovy
    /* zavolat metodu, aby se vygenerované suroviny uložili do storage
     * píše to nějaký warning, asi to nevolám dobře*/;
}

int Mines::getResource (){
    return resource;
}