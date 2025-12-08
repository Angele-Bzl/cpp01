#include "Zombie.hpp"

Zombie::Zombie(void){}

Zombie::~Zombie(void)
{
    std::cout << _name << " has been destroyed." << std::endl;
}

void Zombie::setName(std::string setting)
{
    _name = setting;
}

std::string Zombie::getName(void)
{
    return (_name);
}

void Zombie::announce(void)
{
    std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
