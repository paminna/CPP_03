//
// Created by Регина on 03.01.2022.
//

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main()
{
//    std::string const target = "Target";
//    ClapTrap clapTrap("Clap");
//    ScavTrap scavTrap("Scav");
//    FragTrap fragTrap("Frag");
//    clapTrap.attack(target);
//    clapTrap.beRepaired(10);
//    clapTrap.takeDamage(10);
//    scavTrap.attack(target);
//    scavTrap.takeDamage(20);
//    scavTrap.beRepaired(20);
//    fragTrap.attack(target);
//    fragTrap.beRepaired(30);
//    fragTrap.takeDamage(30);
    ClapTrap Jon("Jon");

    DiamondTrap Jack("Jack");

    Jon.attack("Jack");
    Jack.attack("Jon");
    Jack.takeDamage(40);
    Jack.guardGate();
    Jack.highFivesGuys();
//	Jon.whoAmI();
    Jack.whoAmI();
    return 0;
}
