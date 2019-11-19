#include "Funkcje.h"
#include <ctime>
#include <string>
#include <string>

void zapisz_liczby(ostream& str, const double liczby[], const int N)
{
	for (int i = 0; i < N; i++)
	{
		str << liczby[i] << ' ';
	}
	str << endl;
}

void zapisz_liczby(ostream& str, const vector<double>& liczby)
{
	for (auto liczba : liczby)
	{
		str << liczba << ' ';
	}
	str << endl;
}

void zapisz_losowe(ostream& str)
{
	srand(time(NULL));
	int iloscLiczb = rand() % 500;

	for (int i = 0; i < iloscLiczb; i++)
	{
		str << rand() % 50000 << ' ';
	}

	str << endl;
}

double srednia_liczb(istream& str)
{
	double liczba;
	double srednia = 0;
	int licznik = 0;

	while (str >> liczba)
	{
		srednia += liczba;
		licznik++;
	}

	if (licznik == 0)
	{
		return 0;
	}
	else
	{
		return srednia / licznik;
	}
}

double frobenius(istream& str)
{
	double liczba;
	double norma = 0;

	while (str >> liczba)
	{
		norma += liczba * liczba;
	}

	return norma;
}

void uniq(istream& wejscie, ostream& wyjscie)
{
	int liczba;
	int ostatnia;
	bool pierwsza = true;

	while (wejscie >> liczba)
	{
		if (!pierwsza)
		{
			if (liczba != ostatnia)
			{
				wyjscie << liczba << ' ';
			}
		}
		else
		{
			wyjscie << liczba << ' ';
		}
		pierwsza = false;
		ostatnia = liczba;
	}
	wyjscie << endl;
}

void ile_w_wierszu(istream& wejscie, ostream& wyjscie)
{
	int iloscSpacji = 0;
	string wiersz;

	while (getline(wejscie, wiersz))
	{
		for (int i = 0; i < wiersz.size(); i++)
		{
			if (wiersz[i] == 32)
			{
				iloscSpacji++;
			}
		}
		wyjscie << iloscSpacji + 1 << endl;
		iloscSpacji = 0;
	}
}

void srednia_wiersza(istream& wejscie, ostream& wyjscie)
{
	string wiersz;

	while (getline(wejscie, wiersz))
	{
		string liczba = "";
		int sumaWiersza = 0;
		int iloscLiczb = 0;
		for (int i = 0; i < wiersz.length(); i++)
		{
			if (wiersz[i] != 32)
			{
				liczba.push_back(wiersz[i]);
			}
			if (wiersz[i] == 32)
			{
				iloscLiczb++;
				int liczbaliczba = stoi(liczba);
				sumaWiersza += liczbaliczba;
				liczba = "";
			}
		}
		wyjscie << (double)sumaWiersza / (double)iloscLiczb << endl;
	}
}