#include "Zombie.hpp"

int main(void)
{
    int n = 5;
    Zombie *cranberries;

    cranberries = zombieHorde(n, "Cranberries");

    for (int i = 0 ; i < n ; i++)
    {
        cranberries[i].announce();
    }

    if (cranberries)
        delete[] cranberries;

    return (0);
}