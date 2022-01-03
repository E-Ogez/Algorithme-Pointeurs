#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

void affiche(int *tab, int i, int j) 
{
	for (int a = 0; a < j; a++) {
		for (int b = 0; b < i; b++) {
			printf("%d ", tab[a*i+b]);
		}
		printf("\n");
	}
}


int main()
{
	int tab1[] = { 0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19 };
	int tab2[] = { -19,18,-17,16,-15,14,-13,12,-11,10,-9,8,-7,6,-5,4,-3,2,-1,0 };

	affiche(tab1,4,5); 
	printf("\n");
	affiche(tab2, 4, 5);
}

/* tab1 et tab2 sont des variables locales à main:


int tab1[] = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19};
int tab2[] = {-19,18,-17,16,-15,14,-13,12,-11,10,-9,8,-7,6,-5,4,-3,2,-1,0};


Ecrire une fonction de prototype void affiche(int *tab,int i,int j) qui permet
d'afficher les i*j nombres suivant un tableau i x j(à l’affichage i lignes et j colonnes).
La mettre en oeuvre dans main() pour afficher tab1 et tab2. */
