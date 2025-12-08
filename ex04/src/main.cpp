#include <iostream>
#include <fstream>
#include <string>

void sed(std::string *output, std::string old, std::string nw)
{
    size_t i = 0;
    size_t start = 0;

    while ((i = output->find(old, start)) != std::string::npos)
    {
        output->erase(i, old.size());
        output->insert(i, nw);
        start = i + nw.size();
    }
}

int main(int ac, char **av)
{
    
    if (ac != 4)
    {
        std::cerr << "Error: wrong number of parameters." << std::endl;
        std::cerr << "Expected: ./sed <filname> <to_replace> <replacement>" << std::endl;
        return (-1);
    }

    std::ifstream input_file;
    input_file.open(av[1]);
    if (input_file.fail())
    {
        std::cerr << "Error: open failed." << std::endl;
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
    sed(&output, old, nw);
    
    std::cout << output << std::endl;

    return (0);
}