#pragma once
#include <vector>
#include <iostream>
using namespace std;

struct punkt
{
	double x, y, z;
};

double odleglosc(const punkt& a, const punkt& b);
vector <punkt> wylosuj_punkty(const int N);
pair<punkt, punkt> najdalsze_punkty(const vector<punkt>& chmura);
bool wspolliniowe(const punkt& a, const punkt& b, const punkt& c);
void wypisz(ostream& str, const punkt& a);
void wypisz(ostream& str, const vector<punkt>& a);
bool pole_trojkata(const punkt& a, const punkt& b, const punkt& c);
double najmniejsze_pole_trojkata(const vector<punkt>& chmura);
double kat(const punkt& a, const punkt& b, const punkt& c);
double odleglosc(const punkt& a, const punkt& b, const punkt& c, const punkt& z);