#include "Zombie.hpp"

int main(void)
{
    /*the variable Dolores will be stocked in the heap, independently of the function newZombie()*/
    Zombie *doloresORiordan;
    doloresORiordan = newZombie("Dolores O'Riordan");
    if (!doloresORiordan)
        return (-1);
    /*since Dolores is on the heap, I can use it in main(), even tho it was set in newZombie*/
    doloresORiordan->announce();

    /*the variable Mike will be stocked in the stack of the function randomChump() so it also gets deleted in it*/
    randomChump("Mike Hogan");

    /*the variable Fergal will be stocked in the stack*/
    Zombie fergalLawler;
    fergalLawler.setName("Fergal Lawler");
    fergalLawler.announce();

    /*since Dolores is in the heap, it needs to be manually deleted*/
    if (doloresORiordan)
        delete doloresORiordan;

    /*the variable Fergal will be deleted at the end of the stack of the function main()*/
    return (0);
}