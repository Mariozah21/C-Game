//
// Created by kamil on 17.11.2021.
//

#include "GoldMine.h"

GoldMine::GoldMine() {
    m_id = "GoldMine";
    m_buildLevel = buildLevel;
}

std::string GoldMine::getId() {
    return m_id;
}
int GoldMine::getBuildLevel() {
    return m_buildLevel;
}

void GoldMine::generateResources() {
    Mines::generateResources(GoldMine::getId(), m_buildLevel);
}

void GoldMine::setLevel() {
    m_buildLevel++;
}

