#include <iostream>

int main(void)
{
    std::string hi("HI THIS IS BRAIN");
    std::string *stringPTR = &hi;
    std::string &stringREF = hi;

    std::cout << "hi adress : " << &hi << std::endl;
    std::cout << "stringPTR adress : " << &stringPTR << std::endl;
    std::cout << "stringREF adress : " << &stringREF << std::endl;

    std::cout << "hi value : " << hi << std::endl;
    std::cout << "stringPTR value : " << stringPTR << std::endl;
    std::cout << "stringREF value : " << stringREF << std::endl;

}