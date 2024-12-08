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

	scanf_S("%d", &Np[0]);

	if (Np[0] != -1) {
		for (i = 1;; i++) {
			scanf_s("%d", &Np[i]);
			if (Np[i] == -1) 
			if (i + 1 >= nSize) size_add(&nSize, &Np);
		}