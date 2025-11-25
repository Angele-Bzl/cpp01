#include "Harl.hpp"

int main(void)
{
    Harl harl;

    harl.complain("DEBUG");
    harl.complain("INFO");
    harl.complain("RANDOM");
    harl.complain("");
    harl.complain("WARNING");
    harl.complain("ERROR");
    return (0);
}