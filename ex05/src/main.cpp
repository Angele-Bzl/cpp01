#include "Harl.hpp"

int main(int ac, char **av)
{
    Harl harl;
    
    if (ac <= 1)
    return (0);
    
    int i = 1;
    while (av[i])
    {
        harl.complain(av[i]);
        i++;
    }
    
    return (0);
}

// int main(void)
// {
//     Harl harl;

//     harl.complain("DEBUG");
//     harl.complain("INFO");
//     harl.complain("RANDOM");
//     harl.complain("");
//     harl.complain("WARNING");
//     harl.complain("ERROR");

//     return (0);
// }
