#pragma once
#include <iostream>
#include <string>
#include "Uczen.h"
#include "Uczniowie.h"

using namespace std;

class Klubik
{
	friend class Uczen;
	int numer_sali, baton, cola, sok, drozdzowka, lek;

public:
	Klubik(int = 54, int = 1, int = 2, int = 3, int = 2, int = 8);
	~Klubik();
	void zjedz_baton(Uczen&);
	void zjedz_drozdzowke(Uczen&);
	void wypij_cole(Uczen&);
	void wypij_sok(Uczen&);
	void zazyj_lek(Uczen&);
	int getBaton();
	int getDrozdzowka();
	int getCola();
	int getSok();
	int getLek();
	void odpocznij(Uczen&);
	void bilard(Uczen&, Uczniowie&);
};
