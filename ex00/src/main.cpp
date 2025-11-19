#include "Zombie.hpp"

int main(void)
{
    /*the variable Dolores will be stocked in the heap, independently of the function newZombie()*/
    Zombie *dolores_o_riordan;
    dolores_o_riordan = newZombie("Dolores O'Riordan");
    /*since Dolores is on the heap, I can use it in main(), even tho it was set in newZombie*/
    dolores_o_riordan->annouce();

    /*the variable Mike will be stocked in the stack of the function randomChump() so it also gets deleted in it*/
    randomChump("Mike Hogan");

    /*the variable Fergal will be stocked in the stack*/
    Zombie fergal_lawler;
    fergal_lawler.set_name("Fergal Lawler");
    fergal_lawler.annouce();

    /*since Dolores is in the heap, it needs to be manually deleted*/
    delete dolores_o_riordan;

    /*the variable Fergal will be deleted at the end of the stack of the function main()*/
    return (0);
}