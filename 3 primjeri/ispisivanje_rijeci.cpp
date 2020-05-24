#include <iostream>

int main()
{
	int broj = 0;

	std::string rijec;
	std::cin >> rijec;

	while (broj < rijec.size()) 
	{
		std::cout << rijec[broj] << "\n";
		broj++;
	}
}
