#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include "Korytarz.h"
#include "Uczniowie.h"

void Korytarz::wczytaj_uczniow()
{
	Uczniowie uczen;
	ifstream plik;
	plik.open("lista_uczniow.txt");
	if (!plik.good())
		return;
	while (plik.good())
	{
		plik >> uczen.imie >> uczen.nazwisko
			>> uczen.wiek >> uczen.przyjazn
			>> uczen.sila >> uczen.zycie
			>> uczen.pieniadze;
		lista_uczniow.push_back(uczen);
	}
	plik.close();
}

void Korytarz::wyswietl_uczniow()
{
	for (Uczniowie uczen : lista_uczniow)
	{
		cout << endl << uczen.imie << " " << uczen.nazwisko 
			<< " lat: " << uczen.wiek << endl << "Stopien przyjazni: " << uczen.przyjazn 
			<< endl << "Sila: " << uczen.sila << endl << "Zycie: " << uczen.zycie << endl 
			<< "Pieniadze: " << uczen.pieniadze << " PLN" << endl;
	}
}

Korytarz::Korytarz(int lm, int nr)
{
	liczba_miejsc = lm;
	numer_sali =nr;
}

Korytarz::~Korytarz()
{

}