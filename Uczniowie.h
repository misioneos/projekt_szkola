#pragma once
#include <iostream>
#include <string>

using namespace std;

class Uczniowie
{
	friend class Korytarz;
	friend class Uczen;

public:
	int wiek, przyjazn, sila, zycie, pieniadze;
	string imie, nazwisko;
	Uczniowie(string = "Kumpel", string = "Dobry", int = 12, int = 90, int = 10, int = 50, int = 30);
	~Uczniowie();
	void show();
	void walcz(Uczen&);
	int getSila();
	void wygrana();
	void przegrana();
	void zwieksz_przyjazn();
};