#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    Zombie *zombieHorde = NULL;

    try
    {
        zombieHorde = new Zombie[N];
    }
    catch(std::bad_alloc & ba)
    {
        std::cerr << "Error: new allocation failed " << ba.what() << std::endl;
        return (NULL);
    }
    
    for (int i = 0 ; i < N ; i++)
    {
        zombieHorde[i].setName(name);
    }

    return (zombieHorde);
}