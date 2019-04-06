#include <iostream>
#include <string>
#include "Hala.h"
#include "Uczen.h"

using namespace std;

void Hala::cwicz(Uczen &u1)
{
	u1.zwieksz_zrecznosc();
}

Hala::Hala(int nr)
{
	numer_sali = nr;
}

Hala::~Hala()
{

}