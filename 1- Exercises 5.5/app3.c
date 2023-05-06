/* 
A) Identificar el área de un radio.
B) Utilizar el radio ingresado multiplicandoló 2 veces y por 3.1416
C) r * r * 3.1416.
D) Compilar. Ejecutar
E) Validar.
*/

#include <stdio.h>
#include <conio.h>

int main() {
	float r;
	printf("Programa para calcular el \xA0rea de un radio \n");
	printf("Ingrese el radio a calcular: ");
	scanf("%f",&r);
	printf("El \xA0rea de su radio ser\xA0 de: %.2f", r*r*3.1416);
    getch();
    return 0;
}