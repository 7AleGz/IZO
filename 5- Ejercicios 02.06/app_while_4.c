#include <stdio.h>
#include <conio.h>

void clear() {
    while (getchar() != '\n');
}

int main() {
    int c1 = 0, c2 = 0;
    float imp, sum = 0, prom;

    printf("Ingrese el importe de una factura:\n");
    scanf("%f", &imp);
    
    while (imp != 0) {
        c1++;
        sum += imp;
        if(imp > 3000) {
            c2++;
        }
        
        printf("Ingrese el importe de una factura:\n");
        scanf("%f", &imp);
    }
    
    if (c1 > 0) {
        prom = sum / c1;
        printf("La cantidad de facturas ingresadas es: %i.\n", c1);
        printf("El promedio de ventas es: $%.2f.\n", prom);
        printf("La cantidad de facturas que superan los $3.000 es: %i.\n", c2);
    } else { printf("No se han ingresado datos.\n"); }

    getch();
    return 0;
}