#pragma once
#include <iostream>
#include <string>
#include "Uczen.h"

using namespace std;

class Stolowka
{
	friend class Uczen;
	int numer_sali, zupa, danie, obiad;

public:
	Stolowka(int = 52, int = 4, int = 10, int = 12);
	~Stolowka();
	void zjedz_zupe(Uczen&);
	void zjedz_danie(Uczen&);
	void zjedz_obiad(Uczen&);
	int getZupa();
	int getDanie();
	int getObiad();
};