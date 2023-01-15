#include<stdio.h>

//imprime area del rectangulo
int main(void)
{
	float base;
	float altura;
	float area_rectangulo;
	
	printf("Escribe el numero de la base: ");
	scanf("\n%f", &base);
	
	printf("\nEscribe el numero de la altura: ");
	scanf("\n%f", &altura);
	
	area_rectangulo = base * altura;
	
	printf("\nEl area del rectangulo es de: %.3f", area_rectangulo);
	
	return 0;
}


