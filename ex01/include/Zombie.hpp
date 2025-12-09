#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <iostream>

class Zombie
{
    private:
    std::string _name;

    public:
    /*constructors and destructors*/
    Zombie(void);
    ~Zombie(void);

    /*setters*/
    void setName(std::string setting);
    
    /*getters*/
    std::string getName(void);
    
    /*other*/
    void announce(void);
};

Zombie *zombieHorde(int N, std::string name);

#endif