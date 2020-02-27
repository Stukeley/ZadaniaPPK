#include "Funkcje.h"

int main()
{
	element* pGlowa = new element;
	element* pOgon = new element;
	pGlowa->wartosc = 3;
	pGlowa->pNext = pOgon;
	pGlowa->pPrev = nullptr;
	pOgon->wartosc = 4;
	pOgon->pPrev = pGlowa;
	pOgon->pNext = nullptr;

	//element* pGlowa2 = nullptr;
	//element* pOgon2 = nullptr;

	for (int i = 10; i > 3; i--)
	{
		dodajNaKoniec(pGlowa, pOgon, i);
	}

	wypiszOdPoczatku(pGlowa); cout << endl;

	//dodajDoListyPosortowanej(pGlowa, pOgon, -5);
	//odwrocListe(pGlowa, pOgon);
	//przenies(pGlowa, pOgon, 3, pGlowa2, pOgon2);
	//przesunListe(pGlowa, pOgon);
	posortujListe(pGlowa, pOgon);

	wypiszOdPoczatku(pGlowa); cout << endl;
	//wypiszOdPoczatku(pGlowa2); cout << endl;

	return 0;
}