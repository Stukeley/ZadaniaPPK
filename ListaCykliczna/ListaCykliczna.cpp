#include "Funkcje.h"

int main()
{
	element* pHead = nullptr;
	element* pHead2 = nullptr;

	dodaj(pHead, 3);

	for (int i = 0; i < 5; i++)
	{
		dodaj(pHead2, i);
	}

	dodaj(pHead, 3);

	wypisz(pHead); cout << endl;

	// cout << zliczElementy(pHead) << endl;

	//usunWszystkie(pHead, 3);

	polacz(pHead, pHead2);

	wypisz(pHead); cout << endl;

	//usun(pHead);

	//wypisz(pHead);

	return 0;
}