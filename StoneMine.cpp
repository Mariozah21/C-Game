//
// Created by kamil on 17.11.2021.
//

#include "StoneMine.h"
StoneMine::StoneMine() {
    m_id = "StoneMine";
    buildLevel = m_buildLevel;
}

std::string StoneMine::getId() {
    return m_id;
}

void StoneMine::generateResources(){
    Mines::generateResources("StoneMine", buildLevel);
};