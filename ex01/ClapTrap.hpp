//
// Created by Регина on 02.01.2022.
//

#ifndef CPP_03_CLAPTRAP_HPP
#define CPP_03_CLAPTRAP_HPP
#include <iomanip>
#include <iostream>

class ClapTrap {
public:
    ClapTrap();
    ClapTrap(std::string);
    ~ClapTrap();

    const ClapTrap &operator=(const ClapTrap &clapTrap);
    void attack(std::string const &target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);

private:
    std::string _name;
    int _hitPoints;
    int _energyPoints;
    int _attackDamage;
};

#endif //CPP_03_CLAPTRAP_HPP
