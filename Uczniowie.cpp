#include <iostream>
#include <string>
#include "Uczniowie.h"
#include "Uczen.h"

using namespace std;

void Uczniowie::show()
{
	cout << endl << "Twoj przyjaciel: " << endl;
	cout << imie << " " << nazwisko << " lat: " << wiek << endl << "Stopien przyjazni: " << przyjazn << endl << "Sila: " << sila << endl << "Zycie: " << zycie << endl << "Pieniadze: " << pieniadze << " PLN" << endl;
}

void Uczniowie::walcz(Uczen &u1)
{
	u1.walka();
}

int Uczniowie::getSila()
{
	return sila;
}

void Uczniowie::wygrana()
{
	pieniadze -= 10;
	zycie -= 15;
}

void Uczniowie::przegrana()
{
	pieniadze += 10;
}

void Uczniowie::zwieksz_przyjazn()
{
	przyjazn += 5;
}

Uczniowie::Uczniowie(string im, string na, int wi, int pr, int si, int zy, int pln)
{
	imie = im;
	nazwisko = na;
	wiek = wi;
	przyjazn = pr;
	sila = si;
	zycie = zy;
	pieniadze = pln;
}

Uczniowie::~Uczniowie()
{
	
}