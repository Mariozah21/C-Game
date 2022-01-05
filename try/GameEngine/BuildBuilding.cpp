//
// Created by kamil on 28.12.2021.
//

#include "BuildBuilding.h"

void GameEngine::buildBuilding() {
    std::cout << "Which building do you want to build?" << std::endl;
    std::cout
            << "[1] GoldMine, [2] GoldStorage, [3] StoneMine, [4] StoneStorage, [5] LumberMill, [6] WoodStorage, [0] Go back."
            << std::endl;
    int building;
    std::cin >> building;
    switch (building) {
        case 1:
            if (GoldMine != nullptr) {
                std::cerr << "This building has been built!" << std::endl;
            } else {
                if (50 <= TownHall->m_storedGold && 30 <= TownHall->m_storedStone && 20 <= TownHall->m_storedWood) {
                    TownHall->m_storedGold -= 50;
                    TownHall->m_storedStone -= 30;
                    TownHall->m_storedWood -= 20;
                    GoldMine = new Mines(EnumMine::GoldMine);
                    std::cout << "You build GoldMine." << std::endl;
                } else {
                    std::cout << "You have not enough resources to build this building." << std::endl;
                }
            }
            break;
        case 2:
            if (GoldStorage != nullptr) {
                std::cerr << "This building has been built!" << std::endl;
            } else {
                if (40 <= TownHall->m_storedGold && 50 <= TownHall->m_storedStone && 40 <= TownHall->m_storedWood) {
                    TownHall->m_storedGold -= 40;
                    TownHall->m_storedStone -= 50;
                    TownHall->m_storedWood -= 40;
                    GoldStorage = new Storage(EnumStorage::GoldStorage);
                    std::cout << "You build GoldStorage." << std::endl;
                } else {
                    std::cout << "You have not enough resources to build this building." << std::endl;
                }
            }
            break;
        case 3:
            if (StoneMine != nullptr) {
                std::cerr << "This building has been built!" << std::endl;
            } else {
                if (30 <= TownHall->m_storedGold && 50 <= TownHall->m_storedStone && 40 <= TownHall->m_storedWood) {
                    TownHall->m_storedGold -= 30;
                    TownHall->m_storedStone -= 50;
                    TownHall->m_storedWood -= 40;
                    StoneMine = new Mines(EnumMine::StoneMine);
                    std::cout << "You build StoneMine." << std::endl;
                } else {
                    std::cout << "You have not enough resources to build this building." << std::endl;
                }
            }
            break;
        case 4:
            if (StoneStorage != nullptr) {
                std::cerr << "This building has been built!" << std::endl;
            } else {
                if (40 <= TownHall->m_storedGold && 20 <= TownHall->m_storedStone && 40 <= TownHall->m_storedWood) {
                    TownHall->m_storedGold -= 40;
                    TownHall->m_storedStone -= 20;
                    TownHall->m_storedWood -= 40;
                    StoneStorage = new Storage(EnumStorage::StoneStorage);
                    std::cout << "You build StoneStorage." << std::endl;
                } else {
                    std::cout << "You have not enough resources to build this building." << std::endl;
                }
            }
            break;
        case 5:
            if (LumberMill != nullptr) {
                std::cerr << "This building has been built!" << std::endl;
            } else {
                if (40 <= TownHall->m_storedGold && 40 <= TownHall->m_storedStone && 30 <= TownHall->m_storedWood) {
                    TownHall->m_storedGold -= 40;
                    TownHall->m_storedStone -= 40;
                    TownHall->m_storedWood -= 30;
                    LumberMill = new Mines(EnumMine::LumberMill);
                    std::cout << "You build LumberMill." << std::endl;
                } else {
                    std::cout << "You have not enough resources to build this building." << std::endl;
                }
            }
            break;
        case 6:
            if (WoodStorage != nullptr) {
                std::cerr << "This building has been built!" << std::endl;
            } else {
                if (30 <= TownHall->m_storedGold && 30 <= TownHall->m_storedStone && 30 <= TownHall->m_storedWood) {
                    TownHall->m_storedGold -= 30;
                    TownHall->m_storedStone -= 30;
                    TownHall->m_storedWood -= 30;
                    WoodStorage = new Storage(EnumStorage::WoodStorage);
                    std::cout << "You build WoodStorage." << std::endl;
                } else {
                    std::cout << "You have not enough resources to build this building." << std::endl;
                }
            }
            break;
        case 0:
            return;
        default:
            std::cerr << "Unknown building!" << std::endl;
    }

}