#include <iostream>

int main()
{
	int broj = 0;

	std::string rijec;
	std::cin >> rijec;

	for (rijec[broj]; broj < rijec.size(); broj++) 
	{
		std::cout << rijec[broj] << "\n";

	}
}

#include <iostream>

int main()
{
	std::string rijec;
	std::cin >> rijec;
	
	for (int broj = 0; broj < rijec.size(); broj++)
	{
		std::cout << rijec[broj] << "\n";
	}
}
