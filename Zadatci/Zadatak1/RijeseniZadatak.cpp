#include <iostream>
#include <vector>

#ifdef _WIN32
#include <windows.h>
#else
#include <unistd.h>
#endif // _WIN32

void Spavaj(int brojMilisekundi)
{
#ifdef _WIN32
	Sleep(brojMilisekundi);
#else
	usleep(brojMilisekundi * 1000);
#endif // _WIN32
}

void Ispuni(std::vector<char>& polje)
{
	polje.resize(5);
	polje[0] = '*';
	for (int i = 1; i < 5; i++)
	{
		polje[i] = '_';
	}
}

void Ispisi(std::vector<char>& polje)
{
	for (int i = 0; i < polje.size(); i++)
	{
		std::cout << polje[i];
	}
	std::cout << '\n';
}

void PomakniZvjezdicu(std::vector<char>& polje)
{
	while (polje[polje.size() - 1] != '*')
	{
		Ispisi(polje);
		for (int i = polje.size() - 1; i >= 0; i--)
		{
			if (polje[i] == '*')
			{
				char temp = polje[i + 1];
				polje[i + 1] = polje[i];
				polje[i] = temp;
			}
		}
		Spavaj(1000);
	}
	Ispisi(polje);
	std::cout << "Uspjesno si rijesila zadatak!! Bravo \n";
}

int main()
{
	std::vector<char> red;
	Ispuni(red);
	PomakniZvjezdicu(red);
}
