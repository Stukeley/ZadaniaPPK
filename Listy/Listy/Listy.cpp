#include "Funkcje.h"

int main()
{
	element* pGlowa = nullptr;
	element* pGlowa2 = nullptr;

	for (auto i : { 2, 5, 7, 8, 12, 15 })
	{
		dodajNaKoniecIteracyjnie(pGlowa, i);
	}

	for (auto i : { 3, 6, 8, 14, 22 })
	{
		dodajNaKoniecIteracyjnie(pGlowa2, i);
	}

	wypiszOdPoczatkuRekurencyjnie(pGlowa, cout);
	cout << endl;

	//auto jd = znajdzElementIteracyjnie(pGlowa, 8);
	//usunElementy(pGlowa, 8);

	//dodajIteracyjnieDoListyPosortowanej(pGlowa, 9);
	//dodajRekurencyjnieDoListyPosortowanej(pGlowa, 20);
	//usunOstatniRekurencyjnie(pGlowa);
	element* nowa = scalListyPosortowane(pGlowa, pGlowa2);

	wypiszOdPoczatkuRekurencyjnie(nowa, cout);

	usunListeIteracyjnie(pGlowa);

	return 0;
}