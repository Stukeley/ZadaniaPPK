#include "Funkcje.h"

void dodajNaPoczatek(element*& pHead, element*& pTail, const T& wartosc)
{
	pHead = new element{ wartosc, nullptr, pHead };
}

void dodajNaKoniec(element*& pHead, element*& pTail, const T& wartosc)
{
	pTail = new element{ wartosc, pTail, nullptr };
}

//TODO: poprawic
void dodajDoListyPosortowanej(element*& pHead, element*& pTail, const T& wartosc)
{
	element* temp = pHead;
	//
	while (temp)
	{
		if (temp->wartosc > wartosc)
		{
			temp->pPrev->pNext = new element{ wartosc, temp->pPrev, temp };
			temp->pPrev = temp->pPrev->pNext;
			return;
		}
		temp = temp->pNext;
	}
	// jest najwiekszy wiec dodajemy na koniec
	temp->pPrev->pNext = new element{ wartosc, temp->pPrev, temp };
	temp->pPrev = temp->pPrev->pNext;
}

//TODO: zaimplementowac
void odwrocListe(element*& pHead, element*& pTail)
{
}

element* znajdz(element* pHead, const T& wartosc)
{
	while (pHead)
	{
		if (pHead->wartosc == wartosc)
		{
			return pHead;
		}
		pHead = pHead->pNext;
	}
	return nullptr;
}

void usunListe(element*& pHead, element*& pTail)
{
	while (pHead)
	{
		element* temp = pHead->pNext;
		delete pHead;
		pHead = temp;
	}
}

void usunElementy(element*& pHead, element*& pTail, const T& wartosc)
{
	element* temp = pHead;
	while (temp)
	{
		if (temp->wartosc == wartosc)
		{
			element* temp2 = temp->pNext;
			element* temp3 = temp->pPrev;
			delete temp;
			temp->pPrev->pNext = temp2;
			temp->pNext->pPrev = temp3;
		}
		else
		{
			temp = temp->pNext;
		}
	}
}