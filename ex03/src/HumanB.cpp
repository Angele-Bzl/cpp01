#include "HumanB.hpp"

HumanB::HumanB(std::string name_input)
{
    name = name_input;
}

HumanB::~HumanB(void){}

void HumanB::attack(void)
{
    std::cout << name << " attacks with their " << weapon.getType() << std::endl;
}