#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, " ");
    float hat;
    printf("Programa para calcular Salario áéíóú \n");
    printf("Ingrese las horas a trabajar: ");
    if(scanf("%f", &hat) != 1) {
        printf("No podes ingresar una letra o s\xA1mbolo, solo n\xA3meros");
    	return 1;
    }
    printf("El salario va a ser de: $%.2f", 800 * hat);
    getch();
    return 0;
}