#include "HumanA.hpp"

HumanA::HumanA(std::string name_input, Weapon weapon_input)
{
    name = name_input;
    weapon = weapon_input;
}

HumanA::~HumanA(void){}

void HumanA::attack(void)
{
    std::cout << name << " attacks with their " << weapon.getType() << std::endl;
}
