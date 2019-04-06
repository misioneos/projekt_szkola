#pragma once
#include <iostream>
#include <string>
#include "Uczen.h"

using namespace std;

class WFista
{
	friend class Uczen;
	string imie, nazwisko;
	int nauczanie, numer_sali;

public:
	WFista(string = "Leon", string = "Lech", int = 60, int = 51);
	~WFista();
	void show();
	void trenuj(Uczen&);
	int getNauczanie();
};
