#pragma once
#include <string>
class Operacija
{
public:
	void IspisiOperaciju();

	int m_prviBroj = 0;
	std::string m_operacija = "+";
	int m_drugiBroj = 0;
};