#pragma once
#include <fstream>
#include <ctime>
#include <iostream>
#include <vector>
using namespace std;

int* generuj_tablice(const int SIZE);
int* konkatenuj(const int* t1, const int n1, const int* t2, const int n2);
int* scal(const int* t1, const int n1, const int* t2, const int n2);
double* wczytaj(istream& ss);
