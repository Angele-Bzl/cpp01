#include "Harl.hpp"

int main(int ac, char **av)
{
    Harl harl;

    if (ac != 2)
    {
        std::cout << "Error: expected one argument." << std::endl;
        return (0);
    }
    harl.complain(av[1]);
    return (0);
}

// int main(void)
// {
//     Harl harl;

//     harl.complain("DEBUG");
//     std::cout << "-" << std::endl;
//     harl.complain("INFO");
//     std::cout << "-" << std::endl;
//     harl.complain("RANDOM");
//     std::cout << "-" << std::endl;
//     harl.complain("");
//     std::cout << "-" << std::endl;
//     harl.complain("WARNING");
//     std::cout << "-" << std::endl;
//     harl.complain("ERROR");
//     std::cout << "-" << std::endl;

//     return (0);
// }