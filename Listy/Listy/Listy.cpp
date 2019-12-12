#include "Funkcje.h"

int main()
{
	element* pGlowa = nullptr;

	for (auto i : { 2, 5, 7, 8, 12, 15 })
	{
		dodajNaKoniecIteracyjnie(pGlowa, i);
	}

	wypiszOdPoczatkuRekurencyjnie(pGlowa, cout);
	cout << endl;

	//auto jd = znajdzElementIteracyjnie(pGlowa, 8);
	//usunElementy(pGlowa, 8);

	dodajIteracyjnieDoListyPosortowanej(pGlowa, 0);
	wypiszOdPoczatkuRekurencyjnie(pGlowa, cout);

	usunListeIteracyjnie(pGlowa);

	_CrtDumpMemoryLeaks; // sprawdzanie przecieków
	return 0;
}