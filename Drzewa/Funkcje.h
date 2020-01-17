#pragma once
#include <iostream>
#include <vector>
using namespace std;

typedef int T;

struct wezel
{
	T wartosc;
	wezel* pLewy;
	wezel* pPrawy;
};

void odbij(wezel* pRoot);
void wypiszWszerz(wezel* pRoot);
wezel* znajdzNastepnik(wezel* pRoot, wezel* pPoprzednik);
void usunWezel(wezel*& pRoot, wezel* pDoUsuniecia);
void rotacja_w_lewo(wezel*& pRoot, wezel* q);
void rotacja_w_prawo(wezel*& pRoot, wezel* p);
void zbalansuj(wezel*& pRoot);