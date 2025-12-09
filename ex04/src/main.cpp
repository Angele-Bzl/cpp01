#include <iostream>
#include <fstream>
#include <string>
#include <unistd.h>

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

void createFillFile(char *file, std::string output)
{
    std::string newFileName(file);
    newFileName.append(".replace");
    if (!access(newFileName.c_str(), F_OK))
    {
        std::cout << "Warning: '" << newFileName << "' already exists." << std::endl
        << "By using sed on file '" << file << "', it will overwrite your file '" << newFileName << "'." << std::endl
        << "Are you sure you want to overwrite '" << newFileName << "' ? [y / n]" << std::endl;
        std::string input;
        if (!std::getline(std::cin, input))
            return ;
        if (input != "y")
        {
            std::cout << "Your file will NOT be overwritten. Sed aborted." << std::endl;
            return ;
        }
        std::cout << "You file be overwritten. Sed continues." << std::endl;
    }
    std::ofstream newFile(newFileName.c_str());
    newFile << output;
    newFile.close();
}

int main(int ac, char **av)
{
    
    if (ac != 4)
    {
        std::cout << "Error: wrong number of parameters." << std::endl;
        std::cout << "Expected: ./sed <filname> <to_replace> <replacement>" << std::endl;
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
    sed(&output, old, nw);
    createFillFile(av[1], output);
    return (0);
}