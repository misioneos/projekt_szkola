#pragma once
#include <iostream>
#include <string>
#include "Uczen.h"

using namespace std;

class Hala
{
	int numer_sali;

public:
	Hala(int = 51);
	~Hala();
	void cwicz(Uczen&);
};