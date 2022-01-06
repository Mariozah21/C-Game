//
// Created by kamil on 28.12.2021.
//

#include "GenerateResource.h"
void GameEngine::generateResource() {
    std::cout << "Which resource do you want to generate and store?" << std::endl;
    std::cout << "[1] Gold, [2] Stone, [3] Wood, [0] Go back." << std::endl;
    int building;
    std::cin >> building;
    switch (building) {
        case 1:
            if (GoldMine != nullptr) {
                int storedGold = TownHall->getStoredGold();
                GoldMine->generateResource();
                TownHall->storeResource(GoldMine->getId(), GoldMine->getResource());
                if (storedGold + GoldMine->getResource() >= TownHall->m_maxGold && GoldStorage != nullptr) {
                    GoldStorage->storeResource(GoldMine->getId(), GoldMine->getResource() - (TownHall->m_maxGold - storedGold));
                }
            } else {
                std::cerr << "Mine is missing!" << std::endl;
            }
            break;
        case 2:
            if (StoneMine != nullptr) {
                int storedStone = TownHall->getStoredStone();
                StoneMine->generateResource();
                TownHall->storeResource(StoneMine->getId(), StoneMine->getResource());
                if (storedStone + StoneMine->getResource() >= TownHall->m_maxStone && StoneStorage != nullptr) {
                    StoneStorage->storeResource(StoneMine->getId(), StoneMine->getResource() - (TownHall->m_maxStone - storedStone));
                }
            } else {
                std::cerr << "Mine is missing!" << std::endl;
            }
            break;
        case 3:
            if (LumberMill != nullptr) {
                int storedWood = TownHall->getStoredWood();
                LumberMill->generateResource();
                TownHall->storeResource(LumberMill->getId(), LumberMill->getResource());
                if (storedWood + LumberMill->getResource() >= TownHall->m_maxWood && WoodStorage != nullptr) {
                    WoodStorage->storeResource(LumberMill->getId(), LumberMill->getResource() - (TownHall->m_maxWood - storedWood));
                }
            } else {
                std::cerr << "Mine is missing!" << std::endl;
            }
            break;
        case 0:
            return;
        default:
            std::cerr << "Unknown building!" << std::endl;
    }
}