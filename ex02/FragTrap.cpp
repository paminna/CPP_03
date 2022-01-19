//
// Created by Регина on 03.01.2022.
//

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    _hitPoints = 100;
    _attackDamage = 30;
    _energyPoints = 100;
    std::cout << "FragTrap created ";
}

FragTrap::FragTrap(std::string name)
{
    _name = name;
    _hitPoints = 100;
    _attackDamage = 50;
    _energyPoints = 20;
    std::cout << "FragTrap " << _name << " created" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap destructed" << std::endl;
}

void FragTrap::highFivesGuys()
{
    std::cout << "Here should be positive requests, but here you will see compliments for ypu :)" << std::endl;
    std::cout << "You look very pretty today" << std::endl;
    std::cout << "Your smile is very beautiful" << std::endl;
    std::cout << "Your brain could break some nuts" << std::endl;
    std::cout << "I love when you are happy!!!" << std::endl;
}