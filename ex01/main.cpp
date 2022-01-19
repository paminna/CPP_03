//
// Created by Регина on 03.01.2022.
//

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    std::string const target = "Target";
    ClapTrap clapTrap("Clap");
    ScavTrap scavTrap("Scav");
    clapTrap.attack(target);
    clapTrap.beRepaired(15);
    clapTrap.takeDamage(11);
    scavTrap.attack(target);
    scavTrap.takeDamage(22);
    scavTrap.beRepaired(21);
}
