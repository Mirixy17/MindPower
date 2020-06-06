#include <string>  
#include <iostream>

int main()
{
    std::string rijec;
    std::getline(std::cin, rijec);
    for (int broj = 0; broj < rijec.size(); broj++)
    {
        std::cout << rijec.at(broj) << "\n";
    }
}
