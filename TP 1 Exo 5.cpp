#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

void saisie(float *aa, float *bb, float *cc) {
	printf("valeur de a : ");
	scanf("%f", aa);
	printf("valeur de b : ");
	scanf("%f", bb);
	printf("valeur de c : ");
	scanf("%f", cc);
}

float *calcul(float aa, float bb, float cc, float *d1, float *d2) {
	float delta = bb * bb - 4 * aa*cc;
	printf("%.0f\n", delta);
	if (delta < 0) {
		printf("c'est complexe");
		free(d1);
		free(d2);
		exit(5);
		}
	else if (delta == 0) {
		*d1 = -bb / (2 * aa);
		*d2 = *d1;
	}
	else {
		*d1 = (-bb - sqrt(delta)) / (2 * aa);
		*d2 = (-bb + sqrt(delta)) / (2 * aa);
	}
	return d1;
}

int main() {
	float a, b, c;
	saisie(&a, &b, &c);
	float *d1 = (float*)malloc(sizeof(float));
	float *d2 = (float*)malloc(sizeof(float));
	d1 = calcul(a, b, c, d1, d2);
	printf("%.2f %.2f\n", *d1, *d2);
	free(d1);
	free(d2);
}

/* Calculer et afficher les racines de ax2+bx+c=0.

Une fonction de prototype void saisie(float *aa,float *bb,float *cc) permet de saisir
a,b,c.

Une fonction de prototype float *calcul(float aa,float bb,float cc) exécute les
calculs et renvoie les résultats.

a, b, c sont des variables locales à main();

main() se contente de saisir a,b et c puis d'appeler saisie et calcul et d’afficher les
solutions. */
