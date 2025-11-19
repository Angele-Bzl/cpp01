#include "Weapon.hpp"

Weapon::Weapon(std::string type_input)
{
    type = type_input;
}

Weapon::Weapon(void){}

Weapon::~Weapon(void){}

std::string Weapon::getType(void)
{
    return (type);
}

void Weapon::setType(std::string type_input)
{
    type = type_input;
}