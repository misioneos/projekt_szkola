#include <iostream>
#include <string>
#include "Klubik.h"
#include "Uczen.h"

using namespace std;

void Klubik::zjedz_baton(Uczen &u1)
{
	u1.zwieksz_glod_baton();
}

void Klubik::zjedz_drozdzowke(Uczen &u1)
{
	u1.zwieksz_glod_drozdzowka();
}

void Klubik::wypij_cole(Uczen &u1)
{
	u1.zwieksz_glod_cola();
}

void Klubik::wypij_sok(Uczen &u1)
{
	u1.zwieksz_glod_sok();
}

void Klubik::zazyj_lek(Uczen &u1)
{
	u1.wylecz_sie();
}

int Klubik::getBaton()
{
	return baton;
}

int Klubik::getDrozdzowka()
{
	return drozdzowka;
}

int Klubik::getCola()
{
	return cola;
}

int Klubik::getSok()
{
	return sok;
}

int Klubik::getLek()
{
	return lek;
}

void Klubik::odpocznij(Uczen &u1)
{
	u1.odpoczynek();
}

void Klubik::bilard(Uczen &u1, Uczniowie &ucz1)
{
	u1.odpoczynek();
	ucz1.zwieksz_przyjazn();
	cout << endl << "Gra w bilard z kumplem to sama przyjemnosc!" << endl;
}

Klubik::Klubik(int nr, int ba, int co, int so, int dr, int le)
{
	numer_sali = nr;
	baton = ba;
	cola = co;
	sok = so;
	drozdzowka = dr;
	lek = le;
}

Klubik::~Klubik()
{

}