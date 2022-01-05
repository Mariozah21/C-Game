//
// Created by kamil on 25.12.2021.
//

#include "GameEngine.h"

GameEngine::GameEngine() {
    TownHall = new Storage(EnumStorage::TownHall);
    GoldMine = nullptr;
    StoneMine = nullptr;
    LumberMill = nullptr;
    GoldStorage = nullptr;
    StoneStorage = nullptr;
    WoodStorage = nullptr;
}

void GameEngine::play() {
    int method;
    do {
        printFullInfo();
        std::cout << "What do you want to do?" << std::endl;
        std::cout << "[1] Build building, [2] Build info, [3] Generate resource and store resource, [4] Info about building, [5] Upgrade building, [6] Upgrade info, [0] End game" << std::endl;
        std::cin >> method;
        switch (method) {
            case 1:
                buildBuilding();
                break;
            case 2:
                buildInfo();
                break;
            case 3:
                generateResource();
                break;
            case 4:
                printBuildingInfo();
                break;
            case 5:
                upgradeBuilding();
                break;
            case 6:
                upgradeInfo ();
                break;
        }
    } while (method != 0 && TownHall->getBuildLevel() != 6);
    if (TownHall->getBuildLevel() == 6) {
        std::cout << "You complete the game. CONGRATULATION and thank you for playing this game, bye :)" << std::endl;
    }
    delete TownHall;
    delete GoldMine;
    delete StoneMine;
    delete LumberMill;
    delete GoldStorage;
    delete StoneStorage;
    delete WoodStorage;
}

void GameEngine::upgradeBuilding() {
    std::cout << "Which building do you want to upgrade?" << std::endl;
    std::cout << "[1] TownHall, [2] GoldMine, [3] GoldStorage, [4] StoneMine, [5] StoneStorage, [6] LumberMill, [7] WoodStorage, [0] Go back." << std::endl;
    int building;
    std::cin >> building;
    switch (building) {
        case 1:
            upgradeTownHall();
            break;
        case 2:
            upgradeGoldMine();
            break;
        case 3:
            upgradeGoldStorage();
            break;
        case 4:
            upgradeStoneMine();
            break;
        case 5:
            upgradeStoneStorage();
            break;
        case 6:
            upgradeLumberMill();
            break;
        case 7:
            upgradeWoodStorage();
            break;
        case 0:
            return;
        default:
            std::cerr << "Unknown building!" << std::endl;
    }
}