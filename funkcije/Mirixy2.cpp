#include <iostream>
#include <\Users\Luka\source\repos\Mirixy2\zbroj.h>

void ispis(std::string tekst, int broj)
{
	std::cout << tekst << broj << std::endl;
}

void main()
{
	int a = zbroj(1, 2, 7);
	ispis("a: ", a);

	int b = zbroj(3, 4);
	ispis("b: ", b);

	int c = zbroj(7, 9);
	ispis("c: ", c);

	int d = zbroj(a, b, c);
	ispis("d: ", d);
}
