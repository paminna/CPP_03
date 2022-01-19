//
// Created by Регина on 05.01.2022.
//

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), FragTrap(name), ScavTrap(name)
{
//    _name = name;
    _hitPoints = FragTrap::_hitPoints;
    _energyPoints = ScavTrap::_energyPoints;
    _attackDamage = FragTrap::_attackDamage;
    std::cout << "DiamondTrap " << name << " created" << std::endl;
}

DiamondTrap::DiamondTrap()
{
    std::cout << "Constructor for DiamondTrap called" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "Destructor for DiamondTrap called" << std::endl;
}

void DiamondTrap::whoAmI()
{
    std::cout << "My DiamondTrap name is " << _name << std::endl;
    std::cout << "My ClapTrap name is " << ClapTrap::_name << std::endl;
}