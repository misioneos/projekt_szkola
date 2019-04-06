#include <iostream>
#include <string>
#include "Nauczyciele.h"
#include "Uczen.h"

using namespace std;

void Nauczyciele::show()
{
	cout << endl << "Twoj Nauczyciel: " << endl;
	cout << imie << " " << nazwisko << endl << "Przedmiot: " << przedmiot << endl << "Nauczanie: " << nauczanie << endl << "Numer sali: " << numer_sali << endl;
}

void Nauczyciele::ucz_sie(Uczen &u1)
{
	u1.zwieksz_intelekt();
}

int Nauczyciele::getNauczanie()
{
	return nauczanie;
}

Nauczyciele::Nauczyciele(string im, string na, string pr, int nc, int nr)
{
	imie = im;
	nazwisko = na;
	przedmiot = pr;
	nauczanie = nc;
	numer_sali = nr;
}

Nauczyciele::~Nauczyciele()
{

}