#include <stdio.h>
#include <conio.h>
#include <locale.h>

void clear() {
    while (getchar() != '\n');
}

int main() {
	setlocale(LC_CTYPE, "Spanish");

	float imp1, imp2, impFinal;
    int n, ejes;

    printf("\n          ============ Programa para el cobro de peajes ============\n\n");

	FILE* cat1 = fopen("imp1.txt", "r");
	FILE* cat2 = fopen("imp2.txt", "r");
	FILE* historial = fopen("historial.txt", "w");

    fscanf(cat1, "%f", &imp1);
    fscanf(cat2, "%f", &imp2);

    printf("El valor del peaje para autos es de $%.2f por eje, y el de camiones es de $%.2f por eje \n\n", imp1, imp2);

    int finalizar = 0;

    while (!finalizar) {    
        
        printf("A continuación indique el tipo de vehículo a evaluar.. \n\n 1. Auto \n 2. Camión \n 0. Finalizar. \n\n");

        while (scanf("%i", &n) != 1) {
            printf("Ingrese un valor válido.. \n");
            clear();
        }
        clear();	

        switch (n) {
            case 1:
                printf("\nIndique la cantidad de ejes del vehículo: \n");
                while (scanf("%i", &ejes) != 1) {
                    printf("Ingrese un valor válido.. \n");
                    clear();
                }
                clear();

                impFinal = ejes * imp1;
                printf("El valor total a pagar será de: $%.2f\n\n", impFinal);
                fprintf(historial, "Auto con %i ejes: $%.2f\n", ejes, impFinal);
                getch();
                system("cls");
                break;

            case 2:
                printf("\nIndique la cantidad de ejes del vehículo: \n");
                while (scanf("%i", &ejes) != 1) {
                    printf("Ingrese un valor válido.. \n");
                    clear();
                }
                clear();

                impFinal = ejes * imp2;
                printf("El valor total a pagar será de: $%.2f\n\n", impFinal);
                fprintf(historial, "Camión con %i ejes: $%.2f\n", ejes, impFinal);
                getch();
                system("cls");
                break;

            case 0: 
                finalizar = 1;
                break;
            
            default:
                printf("Has ingresado un valor incorrecto...\n");
                break;
            }
    } 
	return 0;
}