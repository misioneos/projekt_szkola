#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include "Uczniowie.h"

using namespace std;

class Korytarz
{
	friend class Uczniowie;
	int liczba_miejsc, numer_sali;

public:
	std::vector<Uczniowie> lista_uczniow;
	Korytarz(int = 100, int = 0);
	~Korytarz();
	void wczytaj_uczniow();
	void wyswietl_uczniow();
};
