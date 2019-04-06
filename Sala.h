#pragma once
#include <iostream>
#include <string>

using namespace std;

class Sala
{
	int liczba_miejsc, numer_sali;

public:
	Sala(int = 30, int = 1);
	~Sala();
	void wejdz();
};
