#include <stdio.h>
#include <conio.h>

int main() {
    int auton = 14;
    int litros, importe, km, pxl;
    printf("Su autonomia es de %i\n",auton);
    printf("Ingrese la cantidad de litros: ");
    scanf("%d",&litros);
    printf("Precio del litro: ");
    scanf("%d",&pxl);
    km = auton * litros; // Calcula cuantos kms puedo hacer con los litros cargados.
    importe = litros * pxl; // Calcula cuanto duele.
    printf("Podes recorrer: %ikm\n",km);
    printf("Te va a costar: $%i\n",importe);

    getch ();
    return 0;
}