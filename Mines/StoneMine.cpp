//
// Created by kamil on 17.11.2021.
//

#include "StoneMine.h"
StoneMine::StoneMine() {
    m_id = "StoneMine";
    m_buildLevel = buildLevel;
}

std::string StoneMine::getId() {
    return m_id;
}

int StoneMine::getBuildLevel() {
    return m_buildLevel;
}

void StoneMine::generateResources(){
    Mines::generateResources(StoneMine::getId(), m_buildLevel);
};