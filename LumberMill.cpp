//
// Created by kamil on 17.11.2021.
//

#include "LumberMill.h"

LumberMill::LumberMill() {
    m_id = "LumberMill";
    buildLevel = m_buildLevel;
}

void LumberMill::generateResources() {
    Mines::generateResources("LumberMill", buildLevel);
}