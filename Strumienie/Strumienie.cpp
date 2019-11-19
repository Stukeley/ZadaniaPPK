#include <iostream>
#include "Funkcje.h"
using namespace std;

int main()
{
	ifstream we("wejscie.txt");
	ofstream wy("wyjscie.txt");

	srednia_wiersza(we, wy);

	return 0;
}