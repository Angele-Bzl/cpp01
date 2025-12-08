#include "HumanA.hpp"

HumanA::HumanA(std::string name_input, Weapon weapon_input)
{
    _name = name_input;
    _weapon = weapon_input;
}

HumanA::~HumanA(void){}

void HumanA::attack(void)
{
    std::cout << _name << " attacks using " << _weapon.getType() << std::endl;
}
