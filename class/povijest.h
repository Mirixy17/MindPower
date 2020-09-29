#pragma once
#include <vector>
#include <iostream>
#include "Ispis.h"
#include "Operacija.h"

std::vector<Operacija> povijest;

void dodajPovijest(Operacija operacija)
{
	std::cout << "povijest:\n";
	for (int index = 0; index < povijest.size(); index++)
	{
		povijest[index].IspisiOperaciju();
	}
	povijest.push_back(operacija);
}