#pragma once
#include <iostream>
#include <string>
#include "Uczen.h"

using namespace std;

class Nauczyciele
{
	friend class Uczen;
	string imie, nazwisko, przedmiot;
	int nauczanie, numer_sali;

public:
	Nauczyciele(string = "Grazyna", string = "Zarko", string = "Matematyka", int = 60, int=1);
	~Nauczyciele();
	void show();
	void ucz_sie(Uczen&);
	int getNauczanie();
};
