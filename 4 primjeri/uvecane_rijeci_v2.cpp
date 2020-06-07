#include <string>  
#include <iostream>

int main()
{
    std::string rijec;
    std::getline(std::cin, rijec);

    for (int broj = 0; broj < rijec.size(); broj++)
    {
        std::cout << static_cast<char>(rijec.at(broj)+1);
    }
}
