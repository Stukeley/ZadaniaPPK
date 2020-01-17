#include "Funkcje.h"

void odbij(wezel* pRoot)
{
	if (pRoot)
	{
		odbij(pRoot->pLewy);
		odbij(pRoot->pPrawy);
		wezel* temp = pRoot->pLewy;
		pRoot->pLewy = pRoot->pPrawy;
		pRoot->pPrawy = temp;
	}
}

void wypiszWszerz(wezel* pRoot)
{
	struct wartosci
	{
		wezel* wezel;
		wartosci* pNext;
	};

	wartosci* pHead;

	if (pRoot)
	{
		//std::deque<wezel*> potomki;
		//potomki.push_front(pRoot);
		pHead = new wartosci{ pRoot,pHead };

		while (pHead)
		{
			// wyjmij z kolejki adres wezla

			auto p = pHead; // odczytanie wartosci
			pHead = pHead->pNext; // usuniecie z konca

			// wypisz wartosc schowana w wezle

			cout << p->wezel->wartosc << ' ';
			// zapisz do kolejki adresy potomkow:

			if (p->wezel->pLewy)
			{
				wartosci* temp = pHead;

				while (temp->pNext)
				{
					temp = temp->pNext;
				}
				temp->pNext->wezel = p->wezel->pLewy;
			}
			if (p->wezel->pPrawy)
			{
				wartosci* temp = pHead;
				while (temp->pNext)
				{
					temp = temp->pNext;
				}
				temp->pNext->wezel = p->wezel->pPrawy;
			}
		}
	}