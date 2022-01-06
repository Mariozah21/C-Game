cmake_minimum_required(VERSION 3.21)
project(try)

set(CMAKE_CXX_STANDARD 14)

add_executable(try main.cpp Mines/GoldMine.cpp Mines/GoldMine.h Mines/Mines.cpp Mines/Mines.h Mines/EnumMine.h Mines/MineType.cpp Mines/MineType.h Mines/StoneMine.cpp Mines/StoneMine.h Mines/LumberMill.cpp Mines/LumberMill.h Storages/Storage.cpp Storages/Storage.h Storages/EnumStorage.h Storages/StorageType.cpp Storages/StorageType.h Storages/GoldStorage.cpp Storages/GoldStorage.h Storages/StoneStorage.cpp Storages/StoneStorage.h Storages/WoodStorage.cpp Storages/WoodStorage.h GameEngine/GameEngine.cpp GameEngine/GameEngine.h Storages/TownHall.cpp Storages/TownHall.h GameEngine/BuildBuilding.cpp GameEngine/BuildBuilding.h GameEngine/GenerateResource.cpp GameEngine/GenerateResource.h GameEngine/PrintFullInfo.cpp GameEngine/PrintFullInfo.h GameEngine/PrintBuildingInfo.cpp GameEngine/PrintBuildingInfo.h GameEngine/UpgradeBuilding/UpgradeTownHall.cpp GameEngine/UpgradeBuilding/UpgradeTownHall.h GameEngine/UpgradeBuilding/UpgradeGoldMine.cpp GameEngine/UpgradeBuilding/UpgradeGoldMine.h GameEngine/UpgradeBuilding/UpgradeGoldStorage.cpp GameEngine/UpgradeBuilding/UpgradeGoldStorage.h GameEngine/UpgradeBuilding/UpgradeStoneMine.cpp GameEngine/UpgradeBuilding/UpgradeStoneMine.h GameEngine/UpgradeBuilding/UpgradeStoneStorage.cpp GameEngine/UpgradeBuilding/UpgradeStoneStorage.h GameEngine/UpgradeBuilding/UpgradeLumberMill.cpp GameEngine/UpgradeBuilding/UpgradeLumberMill.h GameEngine/UpgradeBuilding/UpgradeWoodStorage.cpp GameEngine/UpgradeBuilding/UpgradeWoodStorage.h GameEngine/UpgradeBuilding/UpgradeInfo.cpp GameEngine/UpgradeBuilding/UpgradeInfo.h GameEngine/BuildInfo.cpp GameEngine/BuildInfo.h)

set(SFML_STATIC_LIBRARIES TRUE)
set(SFML_DIR C:/SFML/lib/cmake/SFML)
find_package(SFML COMPONENTS system window graphics audio network REQUIRED)

include_directories(c:/SFML/include)
target_link_libraries(try sfml-system sfml-window sfml-graphics sfml-audio)

