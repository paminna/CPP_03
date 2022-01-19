//
// Created by Регина on 05.01.2022.
//

#ifndef CPP_03_DIAMONDTRAP_HPP
#define CPP_03_DIAMONDTRAP_HPP
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap {
public:
    DiamondTrap();
    DiamondTrap(std::string name);
    ~DiamondTrap();
    void whoAmI();
    using ScavTrap::attack;
private:
    using ClapTrap::_name;
};


#endif //CPP_03_DIAMONDTRAP_HPP
