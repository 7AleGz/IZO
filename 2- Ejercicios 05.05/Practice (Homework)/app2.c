/* 
A) Necesito ver la suma de tres números enteros ingresados. 
B) Solicitar los números.
C) Variable float que almacena los números y devolver el calculo desde printf();
D) Compilar. Ejecutar
E) Validar.
*/

#include <stdio.h>
#include <conio.h>

void clear() {
    while (getchar() != '\n');
}

int main() {
	float n1, n2, n3;
    printf("Programa para calcular la suma de tres n\xA3meros \n");
    printf("Ingrese su primer valor: \n");
    if (scanf("%f", &n1) != 1) {
    	printf("No podes ingresar una letra o s\xA1mbolo, solo n\xA3meros");
        getch();
    	return 1;
	}
    clear();

    printf("Ingrese su segundo valor: \n");
    if (scanf("%f", &n2) != 1) {
    	printf("No podes ingresar una letra o s\xA1mbolo, solo n\xA3meros");
        getch();
    	return 1;
	}
    clear();

    printf("Ingrese su tercer valor: \n");
    if (scanf("%f", &n3) != 1) {
    	printf("No podes ingresar una letra o s\xA1mbolo, solo n\xA3meros");
        getch();
    	return 1;
	}    
    printf("Su resultado es: %.2f \n", n1 + n2 + n3);
    getch();
    return 0;
}