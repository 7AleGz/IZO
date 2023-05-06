#include <stdio.h>
#include <conio.h>
#include <wchar.h>
#include <locale.h>
#include <stdlib.h>

#define PM2 50.0 // precio por metro cuadrado

int main() {
    float length, front, m2, usd, pfusd, pfars;
    printf("Programa de cotizaci\xA2n de Lotes \n");
    printf("Ingrese la medida de frente en metros: \n");
    scanf("%f",&front);
    printf("Ingrese la medida de largo en metros: \n");
    scanf("%f",&length);
    printf("Precio del d\xA2lar: \n");
    scanf("%f",&usd);
    usd = (usd == 0) ? 1 : usd; // Si la conversión de dólares a pesos es $0 va a mantener el precio en pesos.
    m2 = front * length; // Calcula el metro cuadrado.
    pfusd = m2 * PM2; // Calcula cuanto duele.
    pfars = pfusd * usd; // Pasa el dolor a pesos.
    printf("Un lote de %.2f metros cuadrados te va a costar: $%.2f en d\xA2lares y $%.2f en pesos. \n",m2,pfusd,pfars);
    getch();
    return 0;
}