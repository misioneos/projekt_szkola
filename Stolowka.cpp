#include <iostream>
#include <string>
#include "Stolowka.h"
#include "Uczen.h"

using namespace std;

void Stolowka::zjedz_zupe(Uczen &u1)
{
	u1.zwieksz_glod_zupa();
}

void Stolowka::zjedz_danie(Uczen &u1)
{
	u1.zwieksz_glod_danie();
}

void Stolowka::zjedz_obiad(Uczen &u1)
{
	u1.zwieksz_glod_obiad();
}

int Stolowka::getZupa()
{
	return zupa;
}

int Stolowka::getDanie()
{
	return danie;
}

int Stolowka::getObiad()
{
	return obiad;
}


Stolowka::Stolowka(int nr, int zu, int da, int ob)
{
	numer_sali = nr;
	zupa = zu;
	danie = da;
	obiad = ob;
}

Stolowka::~Stolowka()
{

}