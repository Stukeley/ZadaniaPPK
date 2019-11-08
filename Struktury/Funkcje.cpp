#include "Funkcje.h"
#include <cmath>
#include <ctime>

double odleglosc(const punkt& a, const punkt& b)
{
	return sqrt(pow(b.x - a.x, 2) + pow(b.y - a.y, 2) + pow(b.z - a.z, 2));
}

vector <punkt> wylosuj_punkty(const int N)
{
	vector<punkt> punkty;
	srand(time(NULL));
	for (int i = 0; i < N; i++)
	{
		punkt x{ rand(),rand(),rand() };
		punkty.push_back(x);
	}

	return punkty;
}

pair<punkt, punkt> najdalsze_punkty(const vector<punkt>& chmura)
{
	pair<punkt, punkt> najdalsze;
	double maxOdleglosc = 0;

	for (int i = 0; i < chmura.size() - 1; i++)
	{
		for (int j = i + 1; j < chmura.size(); j++)
		{
			double odl = odleglosc(chmura[i], chmura[j]);
			if (odl > maxOdleglosc)
			{
				maxOdleglosc = odl;
				najdalsze.first = chmura[i];
				najdalsze.second = chmura[j];
			}
		}
	}

	return najdalsze;
}

bool wspolliniowe(const punkt& a, const punkt& b, const punkt& c)
{
	return (odleglosc(a, b) == odleglosc(a, b) + odleglosc(b, c)) || (abs(odleglosc(a, b) - odleglosc(b, c))) == odleglosc(a, c) ? true : false;
}

void wypisz(ostream& str, const punkt& a)
{
	str << a.x << " " << a.y << " " << a.z << endl;
}

void wypisz(ostream& str, const vector<punkt>& a)
{
	for (punkt p : a)
	{
		str << p.x << " " << p.y << " " << p.z << endl;
	}
}

//W pliku jest ewidentnie bool
bool pole_trojkata(const punkt& a, const punkt& b, const punkt& c)
{
	return true; // ka¿dy trójk¹t ma pole
}

//Niestety, wykracza poza nasza znajomosc algebry liniowej :):
double najmniejsze_pole_trojkata(const vector<punkt>& chmura)
{
	return 0;
}

//j.w.
double kat(const punkt& a, const punkt& b, const punkt& c)
{
	return 0;
}

//j.w.
double odleglosc(const punkt& a, const punkt& b, const punkt& c, const punkt& z)
{
	return 0;
}