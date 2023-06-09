#include <stdio.h>
#include <conio.h>

void clear() {
    while (getchar() != '\n');
}

int main() {
    int code, quantity;
    float price, total = 0.0;

    printf("============ Factura de compra ============\n");

    while (1) {
        printf("\nIngrese el c\xA2digo del art\xA1culo (Presione 0 para finalizar): ");
        if (scanf("%d", &code) != 1) {
            printf("Debe ingresar un valor v\xA0lido..");
            getch();
            return 1;
        }
        clear();

        if (code == 0)
            break;

        printf("Ingrese la cantidad comprada: ");
        if (scanf("%d", &quantity) != 1) {
            printf("Debe ingresar un valor v\xA0lido..");
            getch();
            return 1;
        }
        clear();

        printf("Ingrese el precio unitario: ");
        if (scanf("%f", &price) != 1) {
            printf("Debe ingresar un valor v\xA0lido..");
            getch();
            return 1;
        }
        clear();


        float subtotal = quantity * price;
        total += subtotal;

        printf("\nArt\xA1culo: %d\n", code);
        printf("Cantidad: %d\n", quantity);
        printf("Precio unitario: %.2f\n", price);
        printf("Subtotal: %.2f\n", subtotal);
    }

    printf("\nTotal de la factura: %.2f\n", total);
    getch();
    return 0;
}