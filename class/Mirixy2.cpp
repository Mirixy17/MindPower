#include <iostream>
#include "zbroj.h"
#include <vector>
#include "povijest.h"
#include "Ispis.h"
#include "Operacija.h"
void main()
{

	int a = zbroj(1, 2, 7);
	Operacija op_a;
	op_a.m_prviBroj = 1;
	op_a.m_operacija = "+";
	op_a.m_drugiBroj = 2;
	dodajPovijest(op_a);
	ispis("a: ", a);

	int b = zbroj(3, 4);
	Operacija op_b;
	op_b.m_prviBroj = 3;
	op_b.m_operacija = "+";
	op_b.m_drugiBroj = 4;
	dodajPovijest(op_b);
	ispis("b: ", b);

	int c = zbroj(7, 9);
	Operacija op_c;
	op_c.m_prviBroj = 7;
	op_c.m_operacija = "+";
	op_c.m_drugiBroj = 9;
	dodajPovijest(op_c);
	ispis("c: ", c);

	int d = zbroj(a, b, c);
	Operacija op_d;
	op_d.m_prviBroj = a;
	op_d.m_operacija = "+";
	op_d.m_drugiBroj = b;
	dodajPovijest(op_d);
	ispis("d: ", d);
}