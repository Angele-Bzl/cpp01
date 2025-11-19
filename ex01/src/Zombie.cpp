#include "Zombie.hpp"

Zombie::Zombie(void){}

Zombie::~Zombie(void)
{
    std::cout << name << " has been destroyed." << std::endl;
}

void Zombie::set_name(std::string setting)
{
    name = setting;
}

std::string Zombie::get_name(void)
{
    return (name);
}

void Zombie::annouce(void)
{
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
