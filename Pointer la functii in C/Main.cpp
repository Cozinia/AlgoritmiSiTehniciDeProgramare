#include <stdio.h>
#define operatii 4

float adunare(float a, float b) {
	return (a + b);
}

float scadere(float a, float b) {
	return (a - b);
}

float inmultire(float a, float b) {
	return (a * b);
}

float impartire(float a, float b) {
	return (a / b);
}

int main() {
	float a, b;
	int alegere;
	float (*alegereOperatie[operatii])(float, float) = { adunare, scadere, inmultire, impartire };
	printf("Alegeti una dintre optiuni: \n");
	printf("0-adunare\t1-scadere\n");
	printf("2-inmultire\t3-imparire\n");
	scanf_s("%d", &alegere);
	printf("Introduceti primul numar: ");
	scanf_s("%f", &a);
	printf("Introduceti cel de-al doilea numar: ");
	scanf_s("%f", &b);
	float rezultat = alegereOperatie[alegere](a, b);
	printf("Rezultat: %f", rezultat);
	return 0;
}