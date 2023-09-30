#include <stdio.h>
#include <conio.h>

void clear() {
    while (getchar() != '\n');
}

int main() {

    const float AUT = 14;
    float litros, importe, km, pxl;
    printf("Su autonomia es de %.2f. \n", AUT);
    printf("Ingrese la cantidad de litros: ");
    if (scanf("%f", &litros) != 1) {
    	printf("No podes ingresar una letra o s\xA1mbolo, solo n\xA3meros...");
        getch();
    	return 1;
	}
    clear();
    
    printf("Precio del litro: ");
    if (scanf("%f", &pxl) != 1) {
    	printf("No podes ingresar una letra o s\xA1mbolo, solo n\xA3meros...");
        getch();
    	return 1;
	}

    km = AUT * litros; // Calcula cuantos kms puedo hacer con los litros cargados.
    importe = litros * pxl; // Calcula cuanto duele.
    printf("Podes recorrer: %.2fkm.\n", km);
    printf("Te va a costar: $%.2f.\n", importe);
    getch();
    return 0;
} 