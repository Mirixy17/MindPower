#include <iostream>

int main ()
{
	for (int broj = 0; broj <= 42; broj ++)
	{
		if (broj == 42)
		{ 
			std::cout << broj << "is the meaning of life\n";
		}
		else
		{
			std::cout <<broj << "is not the meaning of life\n";
		}
	}
}