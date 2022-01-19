//
// Created by Регина on 03.01.2022.
//

#ifndef CPP_03_SCAVTRAP_HPP
#define CPP_03_SCAVTRAP_HPP
#include "ClapTrap.hpp"

class ScavTrap: virtual public ClapTrap{
public:
    ScavTrap();
    ScavTrap(std::string name);
    ~ScavTrap();
    void guardGate();
    void attack(std::string const &target);
};


#endif //CPP_03_SCAVTRAP_HPP
