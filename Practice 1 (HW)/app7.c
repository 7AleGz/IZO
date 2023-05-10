#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "spanish");
    printf("Hola largáóíúé");
    getch();
    return 0;
}