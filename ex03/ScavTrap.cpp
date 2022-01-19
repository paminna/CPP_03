//
// Created by Регина on 03.01.2022.
//

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    _hitPoints = 100;
    _attackDamage = 20;
    _energyPoints = 50;
    std::cout << "ScavTrap created " << std::endl;
}

ScavTrap::ScavTrap(std::string name)
{
    _name = ClapTrap::_name;
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

void ScavTrap::attack(std::string const &target)
{
    if (this->_hitPoints != 0)
    {
        _hitPoints -= _attackDamage;
        std::cout << "ScavTrap " << _name << " attack " << target << ", causing " << _attackDamage << " points of damage! Now he has " << _hitPoints << std::endl;
    }
    else
        std::cout << "Hitpoints already 0";
}