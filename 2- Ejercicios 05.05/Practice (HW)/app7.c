/* 
A) Necesito ingresar el valor de la hora y el tiempo trabajado por un comerciante y calcular su sueldo.
B) Solicitar ambos valores.
C) Variable float que almacena los valores, devolver el calculo desde printf();
D) Compilar. Ejecutar
E) Validar.
*/

#include <stdio.h>
#include <conio.h>

void clear() {
    while (getchar() != '\n');
}

int main() {
    float pxh, hat;
    printf("Programa para calcular Salario \n");
    printf("Ingrese el valor de la hora: $");
    if (scanf("%f", &pxh) != 1) {
        printf("No podes ingresar una letra o s\xA1mbolo, solo n\xA3meros...");
        getch();
    	return 1;
    }
    clear();

    printf("Ingrese las horas a trabajar: ");
    if (scanf("%f", &hat) != 1) {
        printf("No podes ingresar una letra o s\xA1mbolo, solo n\xA3meros...");
        getch();
    	return 1;
    }
    printf("El salario va a ser de: $%.2f", pxh * hat);
    getch();
    return 0;
}