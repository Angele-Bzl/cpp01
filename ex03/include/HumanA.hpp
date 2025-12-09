#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
    private:
    std::string _name;
    Weapon &_weapon;

    public:
    /*constructors and destructors*/
    HumanA(std::string name, Weapon &weapon);
    ~HumanA(void);

    /*setters*/

    /*getters*/

    /*other*/
    void attack(void);
};

#endif