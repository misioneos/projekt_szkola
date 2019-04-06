#pragma once
#include <iostream>
#include <string>
#include "Nauczyciele.h"
#include "Stolowka.h"

using namespace std;

class Uczen
{
	int wiek, sila, intelekt, zrecznosc, glod, zycie, pieniadze;
	string imie, nazwisko;

public:
	Uczen(string = "Jan", string = "Kowalski", int=12, int=10, int=10, int=10, int=50, int=2, int=50);
	~Uczen();
	void load();
	void show();
	void zwieksz_zrecznosc();
	void zwieksz_intelekt();
	void zwieksz_sile();
	void zwieksz_glod_zupa();
	void zwieksz_glod_danie();
	void zwieksz_glod_obiad();
	void zwieksz_glod_baton();
	void zwieksz_glod_drozdzowka();
	void zwieksz_glod_cola();
	void zwieksz_glod_sok();
	void walka();
	void leczenie();
	void wylecz_sie();
	void odpoczynek();
};