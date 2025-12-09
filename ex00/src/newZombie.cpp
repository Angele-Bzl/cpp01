#include "Zombie.hpp"

Zombie *newZombie(std::string name)
{
    Zombie* newZombie = NULL;
    try
    {
        newZombie = new Zombie();
    }
    catch(std::bad_alloc & ba)
    {
        std::cout << "Error: new allocation failed " << ba.what() << std::endl;
        return (NULL);
    }
    newZombie->setName(name);
    // newZombie->announce();
    return (newZombie);
}
