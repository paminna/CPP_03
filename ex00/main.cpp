//
// Created by Регина on 02.01.2022.
//
#include "ClapTrap.hpp"

int main()
{
    std::string const target = "Target";
    ClapTrap clapTrap("Robot");
    clapTrap.attack(target);
    clapTrap.beRepaired(15);
    clapTrap.takeDamage(10);
}
