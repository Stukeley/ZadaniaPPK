#include "Funkcje.h"

int main()
{
	element* pHead = nullptr;
	for (int i = 0; i < 5; i++)
	{
		dodaj(pHead, i);
	}

	wypisz(pHead); cout << endl;

	cout << zliczElementy(pHead);

	//usun(pHead);

	//wypisz(pHead);

	return 0;
}