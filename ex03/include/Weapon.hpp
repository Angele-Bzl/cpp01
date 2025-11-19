#ifndef WEAPON_H
# define WEAPON_H

# include <iostream>

class Weapon
{
    private:
    std::string type;

    public:
    /*constructors and destructors*/
    Weapon(std::string type_input);
    Weapon(void);
    ~Weapon(void);

    /*setters*/
    std::string getType(void);
    
    /*getters*/
    void setType(std::string type_input);

    /*other*/
};

#endif