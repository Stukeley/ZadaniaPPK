#include <iostream>
#include <vector>
#include <fstream>

// ** Z czego mozna korzystac podczas egzaminu
// std::max             <algorithm>
// strlen	               <cstrng>
// std::vector (jak jest w poleceniu)	<vector>

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
	else
	{
		if (wysokoscDrzewa(pRoot->pLewy) > wysokoscDrzewa(pRoot->pPrawy))
			return 1 + wysokoscDrzewa(pRoot->pLewy);
		else
			return 1 + wysokoscDrzewa(pRoot->pPrawy);
	}
}

// 5.
int dwaPotomki(wezel* pRoot)
{
	if (!pRoot)
		return 0;

	if (pRoot->pPrawy && pRoot->pLewy)
		return 1 + dwaPotomki(pRoot->pPrawy) + dwaPotomki(pRoot->pLewy);
	else if (pRoot->pPrawy)
		return dwaPotomki(pRoot->pPrawy);
	else
		return dwaPotomki(pRoot->pLewy);
}

// 6.
std::vector<int> liczbyZPliku(std::string nazwa)
{
	std::vector<int> liczby;
	std::ifstream plik(nazwa);

	if (!plik)
		return liczby;

	int temp;
	while (plik >> temp)
		liczby.push_back(temp);

	plik.close();
	return liczby;
}

// 7.
int* nowaTablica(int tab[], const int rozmiar)
{
	int* nowa = new int[2 * rozmiar];

	for (int index = 0; index < rozmiar; index++)
	{
		nowa[index * 2] = tab[index];
		nowa[index * 2 + 1] = tab[index] * tab[index];
	}

	return nowa;
}

void kumulacja(int tab[], const int rozmiar)
{
	for (int i = 1; i < rozmiar; i++)
	{
		int suma = 0;
		for (int j = 0; j <= i; j++)
		{
			suma += tab[j];
		}
		tab[i] = suma;
	}
}

// 9.
#define swap(t,x,y) do{t temp = x; x=y; y=temp;}while(0);

// 10.
void odwroc(char*& napis) // rozmiar nie wlicza nulla
{
	int rozmiar = strlen(napis);
	for (int i = 0; i < rozmiar / 2; i++)
	{
		char temp = napis[i];
		napis[i] = napis[rozmiar - i - 1];
		napis[rozmiar - i - 1] = temp;
	}
	napis[rozmiar] = '\0';
}