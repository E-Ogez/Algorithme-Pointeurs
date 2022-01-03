#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

int main()
{
	char *pc;

	pc = (char*)malloc(12 * sizeof(char));

	printf("Entrez une chaine de caractere : ");
	fgets(pc, 12, stdin);

	printf("%s", pc);

	free(pc);
}

/* Soit une variable de type char * , écrire un programme qui saisit une chaîne de
caractères et qui la stocke dans cette variable, puis qui affiche les éléments de la
chaîne caractère par caractère avec leur adresse . */