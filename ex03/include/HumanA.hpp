#ifndef HUMANA_H
# define HUMANA_H

#include "Weapon.hpp"

class HumanA
{
    private:
    std::string name;
    Weapon weapon;

    public:
    /*constructors and destructors*/
    HumanA(std::string name_input, Weapon weapon_input);
    ~HumanA(void);

    /*setters*/
    
    /*getters*/

    /*other*/
    void attack(void);
};

#endif