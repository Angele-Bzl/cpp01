#include "Zombie.hpp"

Zombie *newZombie(std::string name)
{
    Zombie *newZombiePointer = new Zombie();

    newZombiePointer->set_name(name);
    return (newZombiePointer);
}