#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <conio.h>

int main()
{
	int *adr_deb;

	adr_deb = (int*)malloc(6*sizeof(int));

	for (int i = 0; i < 6; i++) {
		printf("Entrez 6 valeur : ");
		scanf("%d", adr_deb + i);
	}

	for (int i = 0; i < 6; i++) {
		printf("%d", adr_deb[i]);
	}

	free(adr_deb);
}

/* Soit adr_deb un pointeur sur entiers, vous ferez en sorte que adr_deb pointe sur un
emplacement mémoire suffisant afin de stocker 6 entiers donnés par l’utilisateur.
Puis vous rangerez ces valeurs dans l’ordre croissant.
Rechercher le maximum, l'afficher ainsi que son adresse et sa position. */
