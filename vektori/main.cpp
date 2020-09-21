#include <iostream>
#include "zbroj.h"
#include <vector>

void ispis(std::string tekst, int broj)
{
	std::cout << tekst << broj << std::endl;
}

void main()
{
	std::vector<int> prijasnjiResultati;

	int a = zbroj(1, 2, 7);
	prijasnjiResultati.push_back(a);
	ispis("a: ", a);

	int b = zbroj(3, 4);
	prijasnjiResultati.push_back(b);
	std::cout << "resultati:\n";
	std::cout << prijasnjiResultati[0] << std::endl;
	ispis("b: ", b);

	int c = zbroj(7, 9);
	prijasnjiResultati.push_back(c);
	std::cout << "resultati:\n";
	std::cout << prijasnjiResultati[0] << std::endl;
	std::cout << prijasnjiResultati[1] << std::endl;
	ispis("c: ", c);

	int d = zbroj(a, b, c);
	prijasnjiResultati.push_back(d);
	std::cout << "resultati:\n";
	std::cout << prijasnjiResultati[0] << std::endl;
	std::cout << prijasnjiResultati[1] << std::endl;
	std::cout << prijasnjiResultati[2] << std::endl;
	ispis("d: ", d);
}
