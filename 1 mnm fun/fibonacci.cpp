#include <iostream>

//Funkcija - stoVraca ImeFunkcije stoPrima
int FibBroj(int prvi, int drugi)
{
	int zbroj = prvi + drugi;
	std::cout << zbroj << std::endl;
	return zbroj;
}

void main()
{
	int prvi_broj = 1;
	int drugi_broj = 1;
	
	std::cout << prvi_broj << std::endl;
	std::cout << drugi_broj << std::endl;
	
	int treci_broj = 0;

	while (treci_broj < 10000)
	{
		treci_broj = FibBroj(prvi_broj, drugi_broj);
		drugi_broj = prvi_broj;
		prvi_broj = treci_broj;
	}
}

// endl dio std::endl umjesto cout, alternativa '\n'
