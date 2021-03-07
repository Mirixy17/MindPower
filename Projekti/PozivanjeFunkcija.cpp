#include <iostream>
#include <string>
#include <vector>

void Alokacija(std::vector<std::vector<int>>& referenca_polja)
{
	referenca_polja.resize(5);
	for (int i = 0; i < 5; i++)
	{
		referenca_polja[i].resize(5);
	}
}

void UpisPrvaOpcija(std::vector<std::vector<int>>& referenca_polja)
{
	int brojac = 0;
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			referenca_polja[i][j] = brojac;
			brojac++;
		}
	}
}
void UpisDrugaOpcija(std::vector<std::vector<int>>& referenca_polja)
{
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			referenca_polja[i][j] = i * 5 + j;
		}
	}
}

void Ispis(std::vector<std::vector<int>>& referenca_polja)
{
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			std::cout << referenca_polja[i][j] << " ";
		}
		std::cout << "\n";
	}
}

int main()
{
	std::vector<std::vector<int>> prvo_polje;
	std::vector<std::vector<int>> drugo_polje;
	Alokacija(prvo_polje);
	Alokacija(drugo_polje);

	UpisPrvaOpcija(prvo_polje);
	UpisDrugaOpcija(drugo_polje);

	Ispis(prvo_polje);
	std::cout << "\n drugo polje \n";
	Ispis(drugo_polje);
}
