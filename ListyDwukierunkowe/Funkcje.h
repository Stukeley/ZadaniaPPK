#pragma once
#include <iostream>
using namespace std;

typedef int T;

struct element
{
	T wartosc;
	element* pPrev;
	element* pNext;
};

// zrobione:
void dodajNaPoczatek(element*& pHead, element*& pTail, const T& wartosc);
void dodajNaKoniec(element*& pHead, element*& pTail, const T& wartosc);
element* znajdz(element* pHead, const T& wartosc);
void usunListe(element*& pHead, element*& pTail);
void usunElementy(element*& pHead, element*& pTail, const T& wartosc);

// skipowane narazie:
void dodajDoListyPosortowanej(element*& pHead, element*& pTail, const T& wartosc);
void odwrocListe(element*& pHead, element*& pTail);
element* przenies(element*& pHeadWej, element*& pTailWej, const T& wartosc, element*& pHeadWyj, element*& pTailWyj);
void posortujListe(element*& pHead, element*& pTail);
void przesunListe(element*& pHead, element*& pTail);
