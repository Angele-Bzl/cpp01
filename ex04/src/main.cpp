#include <iostream>
#include <fstream>
#include <string>

void ftSed(std::string output, std::string old, std::string nw)
{
    int i = 0;
    while (output[i])
    {

    }
}

int main(int ac, char **av)
{
    if (ac != 4)
    {
        std::cout << "Error: wrong number of parameters." << std::endl;
        return (-1);
    }

    std::ifstream input_file;
    input_file.open(av[1]);
    if (input_file.fail())
    {
        std::cout << "Error: open failed." << std::endl;
        return (-1);
    }

    std::string line;
    std::string output;
    while (std::getline(input_file, line))
    {
        output += line;
        output += "\n";
    }
    input_file.close();

    std::string old = av[2];
    std::string nw = av[3];
    ftSed(output, old, nw);

    return (0);
}