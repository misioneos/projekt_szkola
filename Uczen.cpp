#include <iostream>
#include <string>
#include <cstdlib>
#include "Uczen.h"
#include "Nauczyciele.h"
#include "WFista.h"
#include "Stolowka.h"
#include "Korytarz.h"
#include "Uczniowie.h"
#include "Klubik.h"

using namespace std;

void Uczen::load()
{
	cout << "Podaj swoje dane: ";
	cout << endl << "Imie: ";
	cin >> imie;
	cout << "Nazwisko: ";
	cin >> nazwisko;
	cout << "Wiek: ";
	cin >> wiek;
	cout << endl;
}

void Uczen::show()
{
	cout << endl << imie << " " << nazwisko << " lat: " << wiek << endl << "Sila: " << sila << endl << "Intelekt: " << intelekt << endl << "Zrecznosc: " << zrecznosc << endl << "Glod: " << glod << endl << "Zycie: " << zycie << " HP" << endl << "Pieniadze: " << pieniadze << " PLN" << endl;

}

void Uczen::zwieksz_zrecznosc()
{
	zrecznosc += 4;
	glod -= 4;
}

void Uczen::zwieksz_intelekt()
{
	Nauczyciele n1;
	int naucz = n1.getNauczanie();
	intelekt += (naucz / 10);
	glod -= 4;
}

void Uczen::zwieksz_sile()
{
	WFista n1;
	if (glod <= 1)
	{
		cout << "Jestes bardzo glodny. Idz cos zjesc, zanim pocwiczysz!" << endl;
		exit(1);
	}

	int naucz = n1.getNauczanie();
	sila += (naucz / 10);
	glod -= (naucz / 10);
	zycie -= 3;

	if (glod <= 0)
	{
		glod = 1;
		zycie -= 10;
		cout << "Jestes bardzo glodny. Idz cos zjesc!" << endl;
	}

	if (zycie <= 0)
	{
		zycie = 1;
		cout << "Jestes w ciezkim stanie. Udaj sie do pielegniarki!" << endl;
	}
}

void Uczen::zwieksz_glod_zupa()
{
	Stolowka s1;
	int cena = s1.getZupa();
	glod += cena;
	zycie += (cena / 2);
	pieniadze -= cena;
	if (pieniadze < 0)
	{
		pieniadze += cena;
		glod -= cena;
		pieniadze += cena;
		cout << "Nie masz wystarczajacej ilosci pieniedzy" << endl;
	}
}

void Uczen::zwieksz_glod_danie()
{
	Stolowka s1;
	int cena = s1.getDanie();
	glod += cena;
	zycie += (cena / 2);
	pieniadze -= cena;
	if (pieniadze < 0)
	{
		pieniadze += cena;
		glod -= cena;
		zycie -= (cena / 2);
		cout << "Nie masz wystarczajacej ilosci pieniedzy" << endl;
	}
}

void Uczen::zwieksz_glod_obiad()
{
	Stolowka s1;
	int cena = s1.getObiad();
	glod += (cena+2);
	zycie += (cena / 2);
	pieniadze -= cena;
	if (pieniadze < 0)
	{
		pieniadze += cena;
		glod -= (cena + 2);
		zycie -= (cena / 2);
		cout << "Nie masz wystarczajacej ilosci pieniedzy" << endl;
	}
}

void Uczen::zwieksz_glod_baton()
{
	Klubik kl1;
	int cena = kl1.getBaton();
	glod += (2 * cena);
	pieniadze -= cena;
	if (pieniadze < 0)
	{
		pieniadze += cena;
		glod -= (2 * cena);
		cout << "Nie masz wystarczajacej ilosci pieniedzy" << endl;
	}
}

void Uczen::zwieksz_glod_drozdzowka()
{
	Klubik kl1;
	int cena = kl1.getDrozdzowka();
	glod += (2 * cena);
	pieniadze -= cena;
	if (pieniadze < 0)
	{
		pieniadze += cena;
		glod -= (2 * cena);
		cout << "Nie masz wystarczajacej ilosci pieniedzy" << endl;
	}
}

void Uczen::zwieksz_glod_cola()
{
	Klubik kl1;
	int cena = kl1.getCola();
	glod += (2 * cena);
	pieniadze -= cena;
	if (pieniadze < 0)
	{
		pieniadze += cena;
		glod -= (2 * cena);
		cout << "Nie masz wystarczajacej ilosci pieniedzy" << endl;
	}
}

void Uczen::zwieksz_glod_sok()
{
	Klubik kl1;
	int cena = kl1.getSok();
	glod += (2 * cena);
	zycie += 2;
	pieniadze -= cena;
	if (pieniadze < 0)
	{
		pieniadze += cena;
		glod -= (2 * cena);
		zycie -= 2;
		cout << "Nie masz wystarczajacej ilosci pieniedzy" << endl;
	}
}

void Uczen::walka()
{
	Uczniowie ucz1;

	if (pieniadze == 0 || zycie == 1)
	{
		cout << endl << "Nie mozesz przystapic do walki (brak pieniedzy/zdrowia)" << endl;
		exit(1);
	}

	int silaUcznia = ucz1.getSila() + rand()%10;
	int mojaSila = sila + rand()%10;

	if (mojaSila > silaUcznia)
	{
		ucz1.wygrana();
		pieniadze += 10;
		cout << endl << "Wygrales solowke " << mojaSila << ":" << silaUcznia << endl;
	}
	else if (mojaSila == silaUcznia) cout << endl << "Remis " << mojaSila << ":" << silaUcznia << endl;
	else
	{
		ucz1.przegrana();
		pieniadze -= 10;
		zycie -= 15;
		cout << endl << "Przegrales solowke " << mojaSila << ":" << silaUcznia << endl;

		if (pieniadze < 0)
		{
			zycie = 1;
			pieniadze = 0;
			cout << endl << "Przez brak pieniedzy, dostales wiekszy lomot. Lepiej udaj sie do pielegniarki!" << endl;
		}

		if (zycie <= 0)
		{
			zycie = 1;
			cout << "Jestes w ciezkim stanie. Udaj sie do pielegniarki!" << endl;
		}
	}
}

void Uczen::leczenie()
{
	if (zycie == 1)
	{
		zycie = 50;
		cout << endl << "Chyba czujesz sie juz lepiej!" << endl;
	}
	else cout << endl << "Nie jestes w ciezkim stanie. Idz cos zjesc albo odpocznij!" << endl;
}

void Uczen::wylecz_sie()
{
	Klubik kl1;
	int cena = kl1.getLek();
	zycie += 15;
	pieniadze -= cena;
	if (pieniadze < 0)
	{
		pieniadze += cena;
		zycie -= 15;
		cout << "Nie masz wystarczajacej ilosci pieniedzy" << endl;
	}
}

void Uczen::odpoczynek()
{
	zycie += 3;
}

Uczen::Uczen(string im, string na, int wi, int si, int in, int zr, int gl, int zy, int pln)
{
	imie = im;
	nazwisko = na;
	wiek = wi;
	sila = si;
	intelekt = in;
	zrecznosc = zr;
	glod = gl;
	zycie = zy;
	pieniadze = pln;
}

Uczen::~Uczen()
{
	
}