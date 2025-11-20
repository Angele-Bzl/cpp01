#include "Harl.hpp"

/*private*/
void Harl::debug(void)
{
    std::cout << "DEBUG: my cat likes to be pat on the head, with a lot of pressure.\
    You can hold his paws gently, but mostly he likes big hugs." << std::endl;
}

void Harl::info(void)
{
    std::cout << "INFO: make sure to be between the ears on the head.\
    don't hold his paws too long, his patience is limited.\
    and don't let go a big hug as long as he needs it." << std::endl;
}

void Harl::warning(void)
{
    std::cout << "WARNING: when my cat is badly pet, he might gently bite and meow." << std::endl;
}

void Harl::error(void)
{
    std::cout << "ERROR: oh no, the cat left :(" << std::endl;
}

/*constructors and destructors*/
Harl::Harl()
{
    dispatch["DEBUG"] = &Harl::debug;
    dispatch["INFO"] = &Harl::info;
    dispatch["WARNING"] = &Harl::warning;
    dispatch["ERROR"] = &Harl::error;
}

Harl::~Harl(void){}

/*setters*/

/*getters*/

/*other*/
void Harl::complain(std::string level)
{
    std::map<std::string, void (Harl::*)()>::iterator it = dispatch.find(level);
    if (it != dispatch.end())
    {
        void (Harl::*f)()= it->second;    // get the member function pointer which is the second infomation in the map
        (this->*f)();             // call it on *this*
    }
    else
    {
        std::cout << "unknown command\n";
    }
}