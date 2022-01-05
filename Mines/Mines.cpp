//
// Created by kamil on 17.11.2021.
//

#include "Mines.h"

Mines::Mines(): Building("Mine") {
    m_id = "Mines";
    resource = 20;
}

std::string Mines::getId() {
    return m_id;
}

void Mines::changeState(EnumMine mineType) {
    m_mineType = mineType;
    if (m_type != nullptr){
        delete m_type;
    }

    switch (m_mineType) {
        case EnumMine::GoldMine:
            break;
        case EnumMine::LumberMill:
            break;
        case EnumMine::StoneMine:
            break;
        default:
            std::cerr << "Unknown mine type!" << std::endl;
            break;
    }
    makeChanges();
}
void Mines::makeChanges() {
    setId(m_type->getId());
    setBuildingLevel(m_type->getBuildLevel());
}

int Mines::generateResources() {
    resource *= m_buildLevel;
    return resource;
}

void Mines::setId(std::string id) {
    m_id = id;
}

void Mines::setBuildingLevel(int buildLevel) {
    m_buildLevel = buildLevel;
}