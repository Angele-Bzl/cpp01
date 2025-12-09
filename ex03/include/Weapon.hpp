#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>

class Weapon
{
    private:
    std::string _type;

    public:
    /*constructors and destructors*/
    Weapon(std::string type_input);
    Weapon(void);
    ~Weapon(void);

    /*setters*/
    std::string getType(void) const;
    
    /*getters*/
    void setType(const std::string value);

    /*other*/
};

#endif