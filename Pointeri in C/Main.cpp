#include <stdio.h>

int main() {

	//---Print adress of age
	int age = 25;
	printf("%p\n", &age);

	//delare pointer
	//Asignarea lui ptr cu adresa la care se afla age
	int* ptr = &age;
	printf("%p\n", &age);

	//Afisarea adresei variabilei ptr
	printf("Adresa: %p\n", ptr);//Se foloseste p pentru a se afisa adresa lui ptr

	//Afisarea valorii de la adresa variabilei ptr
	printf("Valoarea: %d\n", *ptr);//Se foloseste d(int) pentru a se afisa valoarea lui ptr


	return 0;
}