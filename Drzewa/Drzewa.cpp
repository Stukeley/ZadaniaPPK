#include "Funkcje.h"

int main()
{
	int tab[]{ 15,10,25,4,13,20,28,1,11,23 };
	wezel* pKorzen = nullptr;
	listawszerz2drzewo(pKorzen, tab, 10);
	wypisz(pKorzen);

	wezel* katyElement = katy(pKorzen, 8);
	wypisz(katyElement);

	return 0;
}