#include <iostream>
#include <string>
#include "WFista.h"
#include "Uczen.h"

using namespace std;

void WFista::show()
{
	cout << endl << "Twoj WFista: " << endl;
	cout << imie << " " << nazwisko << endl << "Nauczanie: " << nauczanie << endl << "Numer sali: " << numer_sali << endl;
}

void WFista::trenuj(Uczen &u1)
{
	u1.zwieksz_sile();
}

int WFista::getNauczanie()
{
	return nauczanie;
}

WFista::WFista(string im, string na, int nc, int nr)
{
	imie = im;
	nazwisko = na;
	nauczanie = nc;
	numer_sali = nr;
}

WFista::~WFista()
{

}