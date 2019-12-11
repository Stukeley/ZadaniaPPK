#include "Funkcje.h"

int main()
{
	element* pGlowa = nullptr;

	for (auto i : { 1, 5, 7, 8, 12, 15, 8 })
	{
		dodajNaKoniecIteracyjnie(pGlowa, i);
	}

	wypiszOdPoczatkuRekurencyjnie(pGlowa, cout);
	cout << endl;

	//auto jd = znajdzElementIteracyjnie(pGlowa, 8);
	//usunElementy(pGlowa, 8);

	odwrocListe(pGlowa);
	wypiszOdPoczatkuRekurencyjnie(pGlowa, cout);

	usunListeIteracyjnie(pGlowa);

	_CrtDumpMemoryLeaks; // sprawdzanie przecieków
	return 0;
}