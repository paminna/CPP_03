//
// Created by Регина on 02.01.2022.
//

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    _hitPoints = 10;
    _attackDamage = 0;
    _energyPoints = 10;
    std::cout << "ClapTrap created ";
}

ClapTrap::ClapTrap(std::string name)
{
    this->_name = name;
    this->_hitPoints = 10;
    this->_attackDamage = 0;
    this->_energyPoints = 10;
    std::cout << "ClapTrap " << this->_name << " created" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &clapTrap)
{
    _name = clapTrap._name;
    _attackDamage = clapTrap._attackDamage;
    _energyPoints = clapTrap._energyPoints;
    _hitPoints = clapTrap._hitPoints;
    return *this;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap destructed" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if ((unsigned int)_hitPoints >= amount)
        this->_hitPoints -= amount;
    else
        _hitPoints = 0;
    std::cout << "ClapTrap " << this->_name << " took damage " << amount << " now hitpoints " << this->_hitPoints << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    this->_hitPoints += amount;
    std::cout << "ClapTrap " << this->_name << " repaired himself for " << amount << " now he has " << this->_hitPoints << std::endl;
}


void ClapTrap::attack(std::string const &target)
{
    if (this->_hitPoints != 0)
        std::cout << "ClapTrap " << this->_name << " attack " << target << ", causing " <<  this->_attackDamage << " points of damage!" << std::endl;
    else
        std::cout << "Hitpoints already 0";
}