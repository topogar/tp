cmake_minimum_required(VERSION 3.9)
project(tp1)

set(CMAKE_CXX_STANDARD 11)

add_executable(tp1 main.cpp Unit.cpp Unit.h Warrior.cpp Warrior.h Mage.cpp Mage.h Ranger.cpp Ranger.h Knight.cpp Knight.h Archer.cpp Archer.h Wizard.cpp Wizard.h Army.cpp Army.h ArmyFactory.cpp ArmyFactory.h HumanArmyFactory.cpp HumanArmyFactory.h UndeadArmyFactory.cpp UndeadArmyFactory.h Menu.cpp Menu.h Player.cpp Player.h defines.cpp defines.h Decorator.cpp Decorator.h)