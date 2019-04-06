#include <iostream>
#include <string>
#include "Sala.h"

using namespace std;

void Sala::wejdz()
{
	cout << "Kiedys tu bedzie warunek dotyczacy czy mozna wejsc w zaleznosci od liczby osob w sali i bedzie mozna porozmawiac z nauczycielem" << endl;
}

Sala::Sala(int lm, int nr)
{
	liczba_miejsc = lm;
	numer_sali = nr;
}

Sala::~Sala()
{

}