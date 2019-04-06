#pragma once
#include <iostream>
#include <string>
#include "Uczen.h"

using namespace std;

class Pielegniarka
{
	string imie, nazwisko;
	int numer_sali;

public:
	Pielegniarka(string = "Beata", string = "Kozidrak", int = 53);
	~Pielegniarka();
	void ulecz_sie(Uczen&);
};