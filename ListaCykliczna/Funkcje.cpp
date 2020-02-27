#include "Funkcje.h"

void dodaj(element*& pHead, const T wartosc)
{
	if (!pHead)
	{
		pHead = new element;
		pHead->wartosc = wartosc;
		pHead->pNext = pHead;
		return;
	}

	element* nowy = new element{ wartosc,pHead };
	element* temp = pHead;

	while (temp->pNext != pHead)
	{
		temp = temp->pNext;
	}

	temp->pNext = nowy;

	pHead = nowy;
}

void usun(element*& pHead)
{
	auto temp2 = pHead;
	int rozmiar = 0;
	int x = 0;

	while (temp2->pNext != pHead)
	{
		rozmiar++;
		temp2 = temp2->pNext;
	}

	temp2 = pHead;

	while (x++ < rozmiar)
	{
		auto temp3 = temp2->pNext;
		delete temp2;
		temp2 = temp3;
	}

	delete temp2;

	pHead = nullptr;
}

void wypisz(element* pHead)
{
	if (pHead)
	{
		element* temp = pHead;

		while (temp->pNext != pHead)
		{
			cout << temp->wartosc << ' ';
			temp = temp->pNext;
		}
	}
}

int zliczElementy(element* pHead)
{
	element* temp = pHead;
	int rozmiar = 0;

	while (temp->pNext != pHead)
	{
		rozmiar++;
		temp = temp->pNext;
	}

	return rozmiar;
}

void usun(element*& pHead, const T& wartosc)
{
	auto temp = pHead;
	bool znaleziono = false;
	while (temp->pNext->pNext != pHead)
	{
		if (temp->pNext->wartosc == wartosc)
		{
			znaleziono = true;
			if (temp == pHead)
			{
				pHead = pHead->pNext;
				break;
			}
			else{
				
				return;
			}
		}
		temp = temp->pNext;
	}

	if (!znaleziono)
		return;
	//ustawianie ostatniego na nowy phead
}

void usunWszystkie(element*& pHead, const T& wartosc)
{
}

void usun(element*& pHead, const element* pDoUsuniecia)
{
}

void polacz(element*& pH1, element*& pH2)
{
}