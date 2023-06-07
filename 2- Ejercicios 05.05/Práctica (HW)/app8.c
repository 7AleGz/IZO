/* 
A) Necesito ingresar el tiempo trabajado y calcular su sueldo.
B) Solicitar tiempo trabajado.
C) Variable float que almacena el valor de horas trabajadas, devolver el calculo desde printf();
D) Compilar. Ejecutar
E) Validar.
*/

#include <stdio.h>
#include <conio.h>

int main() {
    float hat;
    printf("Programa para calcular Salario \n");
    printf("Ingrese las horas a trabajar: ");
    if(scanf("%f", &hat) != 1) {
        printf("No podes ingresar una letra o s\xA1mbolo, solo n\xA3meros");
        getch();
    	return 1;
    }
    printf("El salario va a ser de: $%.2f", 800 * hat);
    getch();
    return 0;
}