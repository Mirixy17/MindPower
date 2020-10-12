

U main.cpp

#include "Fizz.h"

void main()
{

	 FizzBuzz(15);

}



u Fizz.cpp

#include <iostream>
#include "Fizz.h"

void FizzBuzz(int broj)
{
	if (broj % 5 == 0 && broj % 3 == 0)
	{
		std::cout << "fizzbuzz" << std::endl;
	}
	else if (broj % 5 == 0)
	{
		std::cout << "buzz" << std::endl;
	}
	else if (broj % 3 == 0)
	{
		std::cout << "fizz" << std::endl;
	}
	else
	{
		std::cout << broj << std::endl;
	}
}



u Fizz.h

#pragma once

void FizzBuzz(int broj);
