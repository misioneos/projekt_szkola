#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
#include <ctime>
#include "WFista.h"
#include "Hala.h"
#include "Korytarz.h"
#include "Nauczyciele.h"
#include "Sala.h"
#include "Stolowka.h"
#include "Uczen.h"
#include "Uczniowie.h"
#include "Pielegniarka.h"
#include "Klubik.h"

using namespace std;


int main()
{
	srand((unsigned int)time(NULL));
	Uczen u1;
	Korytarz k1;
	Hala h1;
	Stolowka s1;
	WFista wf1;
	Nauczyciele n1;
	Uczniowie przeciwnik, ucz1("Piotr","Nowak",16,90,25,50,30), ucz2;
	Pielegniarka p1;
	Klubik kl1;
	u1.load();
	u1.show();
	ucz1.walcz(u1);
	u1.show();
	p1.ulecz_sie(u1);
	kl1.odpocznij(u1);
	kl1.bilard(u1, ucz1);
	u1.show();
	ucz1.show();
	k1.wczytaj_uczniow();
	ucz2 = k1.lista_uczniow[5];
	ucz2.show();
	ucz2.walcz(u1);
	/*wf1.trenuj(u1);
	h1.cwicz(u1);
	s1.zjedz_obiad(u1);
	n1.ucz_sie(u1);
	przeciwnik.walcz(u1);
	u1.show();
	//k1.wyswietl_uczniow();*/
	return 0;
}