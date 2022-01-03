#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <conio.h>

void main()
{
	float *adr1, *adr2;
	adr1 = (float*)malloc(4);
	adr2 = (float*)malloc(4);
	*adr1 = -45.78;
	*adr2 = 678.89;
	printf("adr1 = %p adr2 = %p r1 = %f r2 = %f\n", adr1, adr2, *adr1, *adr2);
	free(adr1);
	free(adr2);
}

/* adr1 et adr2 sont des pointeurs pointant sur des réels.
Le contenu de où pointe adr1 vaut -45,78; le contenu de où pointe adr2 vaut 678,89.
Ecrire un programme qui ne contient que deux variables(adr1 et adr2) de type
pointeurs sur réél, qui stocke deux valeurs réelles (-45.78 et 678.89) et qui affiche les
adresses des espaces mémoires qui stockent les deux rééls ainsi que le contenu de
ces deux espaces. */
