//
// Created by kamil on 17.11.2021.
//

#include "LumberMill.h"

LumberMill::LumberMill() {
    m_id = "LumberMill";
    m_buildLevel = buildLevel;
}

std::string LumberMill::getId() {
    return m_id;
}
int LumberMill::getBuildLevel() {
    return m_buildLevel;
}

void LumberMill::generateResources() {
    Mines::generateResources(LumberMill::getId(), m_buildLevel);
}