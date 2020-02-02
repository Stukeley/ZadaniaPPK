#include <iostream>

struct element
{
	int wartosc;
	element* pNext;
};

struct wezel
{
	int wartosc;
	wezel* pPrawy, * pLewy;
};

// 1.
int zsumuj(element* pHead)
{
	if (!pHead)
		return 0;
	else
		return pHead->wartosc + zsumuj(pHead->pNext);
}

// 2.
void odwroc(element*& pHead)
{
	auto temp = pHead->pNext;
	pHead->pNext = nullptr;
	while (temp)
	{
		auto temp2 = temp->pNext;
		temp->pNext = temp;
		temp = temp2;
	}
}

void odwroc2(element*& pHead)
{
	auto glowa = pHead;
	glowa->pNext = nullptr;
	pHead = pHead->pNext;
	while (pHead)
	{
		glowa = new element{ pHead->wartosc, glowa };
		pHead = pHead->pNext;
	}
	pHead = glowa;
}

// 3.
int iloscElementow(element* pHead)
{
	if (!pHead)
		return 0;

	int ilosc = 1;
	auto temp = pHead->pNext;
	while (temp != pHead)
	{
		ilosc++;
		temp = temp->pNext;
	}
	return ilosc;
}

// 4.
int wysokoscDrzewa(wezel* pRoot)
{
	if (!pRoot)
		return 0;

	int maxsWysokosc = 1;
	


	return maxsWysokosc;
}