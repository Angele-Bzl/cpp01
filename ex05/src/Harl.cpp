#include "Harl.hpp"

/*private*/
void Harl::debug(void)
{
    std::cout << "DEBUG: my cat likes to be pat on the head, and mostly he likes big hugs." << std::endl;
}

void Harl::info(void)
{
    std::cout << "INFO: make sure to be between the ears on the head, and don't let go a big hug as long as he needs it." << std::endl;
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
Harl::Harl(){}

Harl::~Harl(void){}

/*setters*/

/*getters*/

/*other*/
enum level_num
{
    DEBUG,
    INFO,
    WARNING,
    ERROR,

    EXEC_ERR = -1
};

static level_num what_to_complain(std::string level)
{
    if (level == "INFO")
        return (INFO);
    if (level == "WARNING")
        return (WARNING);
    if (level == "DEBUG")
        return (DEBUG);
    if (level == "ERROR")
        return (ERROR);
    return (EXEC_ERR);
}

typedef void (Harl::*pointer_member_complain)();

void Harl::complain(std::string level)
{
    pointer_member_complain complains[] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    level_num to_do = what_to_complain(level);

    if (to_do >= 0 && to_do <= 3)
        (this->*complains[to_do])();
    else
        std::cout << "[I love my cat and you should too.]" << std::endl;
}
