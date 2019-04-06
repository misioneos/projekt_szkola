#include <iostream>
#include <string>
#include "Pielegniarka.h"
#include "Uczen.h"

using namespace std;

void Pielegniarka::ulecz_sie(Uczen &u1)
{
	u1.leczenie();
}

Pielegniarka::Pielegniarka(string im, string na, int nr)
{
	imie = im;
	nazwisko = na;
	numer_sali = nr;
}

Pielegniarka::~Pielegniarka()
{

}