#include <string>  
#include <iostream>

int main()
{
    std::string rijec;
    std::getline(std::cin, rijec);

    for (int broj = 0; broj < rijec.size(); broj++)
    {
        char znak = rijec.at(broj);
        int znakKaoBroj = static_cast<int>(znak);
        znakKaoBroj++;
        char uvecaniZnak = static_cast<char>(znakKaoBroj);

        std::cout << uvecaniZnak;
    }
}
