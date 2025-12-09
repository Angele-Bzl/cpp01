#include "Weapon.hpp"

Weapon::Weapon(std::string type_input)
{
    _type = type_input;
}

Weapon::Weapon(void)
{
    _type = "a small stick";
}

Weapon::~Weapon(void){}

std::string Weapon::getType(void) const
{
    return (_type);
}

void Weapon::setType(const std::string value)
{
    _type = value;
}