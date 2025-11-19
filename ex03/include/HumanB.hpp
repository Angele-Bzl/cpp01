#ifndef HUMANB_H
# define HUMANB_H

#include "Weapon.hpp"

class HumanB
{
    private:
    std::string name;
    Weapon weapon;

    public:
    /*constructors and destructors*/
    HumanB(std::string name_input);
    ~HumanB(void);

    /*setters*/
    
    /*getters*/

    /*other*/
    void attack(void);
};

#endif