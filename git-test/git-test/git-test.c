#pragma warning(disable:4996)
#include <stdio.h>
#include<stdlib.h>
#include<string.h>

void size_add(int* s, int* arr);

void main() {
	int* Np;
	int i = 0;
	int nSize = 3;
	Np = malloc(sizeof(int) * nSize);

	scanf_("%d", &Np[0]);
