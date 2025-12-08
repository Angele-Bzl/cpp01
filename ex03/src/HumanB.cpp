#include "HumanB.hpp"

HumanB::HumanB(std::string name_input)
{
    _name = name_input;
    _weapon.setType("bare hands");
}

HumanB::~HumanB(void){}

void HumanB::attack(void)
{
    std::cout << _name << " attacks using " << _weapon.getType() << std::endl;
}