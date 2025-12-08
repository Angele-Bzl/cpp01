#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
    private:
    std::string _name;
    Weapon _weapon;

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