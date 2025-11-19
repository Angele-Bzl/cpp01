#ifndef ZOMBIE_H
# define ZOMBIE_H
# include <iostream>

class Zombie
{
    private:
    std::string name;

    public:
    /*constructors and destructors*/
    Zombie(void);
    ~Zombie(void);

    /*setters*/
    void set_name(std::string setting);
    
    /*getters*/
    std::string get_name(void);
    
    /*other*/
    void annouce(void);
};


Zombie *newZombie(std::string name);
void randomChump(std::string name);

#endif