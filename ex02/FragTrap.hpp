//
// Created by Регина on 03.01.2022.
//

#ifndef CPP_03_FRAGTRAP_HPP
#define CPP_03_FRAGTRAP_HPP
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap{
public:
    FragTrap();
    FragTrap(std::string);
    ~FragTrap();
    void highFivesGuys(void);
private:
    std::string _name;
    int _hitPoints;
    int _energyPoints;
    int _attackDamage;
};


#endif //CPP_03_FRAGTRAP_HPP
