//
// Created by Регина on 03.01.2022.
//

#ifndef CPP_03_SCAVTRAP_HPP
#define CPP_03_SCAVTRAP_HPP
#include "ClapTrap.hpp"

class ScavTrap:public ClapTrap{
public:
    ScavTrap();
    ScavTrap(std::string);
    ~ScavTrap();
    void guardGate();
private:
    std::string _name;
    int _hitPoints;
    int _energyPoints;
    int _attackDamage;
};


#endif //CPP_03_SCAVTRAP_HPP
