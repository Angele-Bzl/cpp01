#ifndef HARL_H
# define HARL_H

#include <iostream>
#include <map>

class Harl
{
    private:
    void debug(void);
    void info(void);
    void warning(void);
    void error(void);

    public:
    /*constructors and destructors*/
    Harl(void);
    ~Harl(void);

    /*setters*/
    
    /*getters*/
    
    /*other*/
    void complain(std::string level);
};

#endif