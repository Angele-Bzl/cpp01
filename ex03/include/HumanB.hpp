#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
    private:
    std::string _name;
    Weapon *_weapon;

    public:
    /*constructors and destructors*/
    HumanB(std::string name);
    ~HumanB(void);

    /*setters*/
    void setWeapon(Weapon &weapon);
    
    /*getters*/

    /*other*/
    void attack(void);
};

#endif