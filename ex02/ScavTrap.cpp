//
// Created by Регина on 03.01.2022.
//

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    _hitPoints = 100;
    _attackDamage = 20;
    _energyPoints = 50;
    std::cout << "ScavTrap created ";
}

ScavTrap::ScavTrap(std::string name)
{
    _name = name;
    _hitPoints = 100;
    _attackDamage = 50;
    _energyPoints = 20;
    std::cout << "ScavTrap " << _name << " created" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap destructed" << std::endl;
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap have entered in Gate keeper mode" << std::endl;
}

