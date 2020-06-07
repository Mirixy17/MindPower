#include <string>  
#include <iostream>

int main()
{
    std::string rijec;
    std::getline(std::cin, rijec);

    int duzinaRijeci = rijec.size();
    bool paran = duzinaRijeci % 2 == 0;
    if (paran)
    {
        std::cout << "paran\n";
    }
    else
    {
        std::cout << "ne paran\n";
    }
}
