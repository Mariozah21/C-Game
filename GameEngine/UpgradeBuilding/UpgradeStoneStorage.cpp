//
// Created by kamil on 28.12.2021.
//

#include "UpgradeStoneStorage.h"

void GameEngine::upgradeStoneStorage() {
    if (GoldStorage != nullptr && StoneStorage != nullptr && WoodStorage != nullptr) {
        if ((GoldStorage->getStoredGold() + TownHall->getStoredGold()) - (80 * StoneStorage->getBuildLevel()) >= 0 &&
            (StoneStorage->getStoredStone() + TownHall->getStoredStone()) - (90 * StoneStorage->getBuildLevel()) >= 0 &&
            (WoodStorage->getStoredWood() + TownHall->getStoredWood()) - (90 * StoneStorage->getBuildLevel()) >= 0 && StoneStorage->getBuildLevel() < TownHall->getBuildLevel()) {
            if (GoldStorage->getStoredGold() - (80 * StoneStorage->getBuildLevel()) >= 0) {
                GoldStorage->m_storedGold = GoldStorage->getStoredGold() - (80 * StoneStorage->getBuildLevel());
            } else {
                TownHall->m_storedGold = (GoldStorage->getStoredGold() + TownHall->getStoredGold()) - (80 * StoneStorage->getBuildLevel());
                GoldStorage->m_storedGold = 0;
            }
            if (StoneStorage->getStoredStone() - (90 * StoneStorage->getBuildLevel()) >= 0) {
                StoneStorage->m_storedStone = StoneStorage->getStoredStone() - (90 * StoneStorage->getBuildLevel());
            } else {
                TownHall->m_storedStone = (StoneStorage->getStoredStone() + TownHall->getStoredStone()) - (90 * StoneStorage ->getBuildLevel());
                StoneStorage->m_storedStone = 0;
            } if (WoodStorage->getStoredWood()- (90 * StoneStorage->getBuildLevel()) >= 0){
                WoodStorage->m_storedWood = WoodStorage->getStoredWood()- (90 * StoneStorage->getBuildLevel());
            } else {
                TownHall->m_storedWood = (WoodStorage->getStoredWood() + TownHall->getStoredWood()) - (90 * StoneStorage->getBuildLevel());
                WoodStorage->m_storedWood = 0;
            }
            StoneStorage->upgradeLevel();
        } else {
            std::cout << "You have not enough resources." << std::endl;
        }
    } else {
        std::cout << "You cannot upgrade this building, some building or building level is missing." << std::endl;
    }
}