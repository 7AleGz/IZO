#include<stdio.h>
#include<conio.h>
#include <stdlib.h>
main()
{
int opcion;
system("cls");
printf("       ----------     --------BIENVENIDOS--------    -----------\n");
printf("Escoja una de las opciones numericas 1-2-3-4 \n                    y presione intro: ");
scanf("%d",&opcion);
system("cls");
switch(opcion){
	case 1 :
		//system("cls");
		printf("\n\n\n\n\n\n\n\n\n  tu Nombre: MAURICIO ");
		getch();
		break;
    case 2 :
		//system("cls");
		printf("\n\n\n\n\n\n\n\n\n tu Apellido: GARCIA ");
		getch();
		break;
	case 3 :
		//system("cls");
		printf("\n\n\n\n\n\n\n\n\n tu Edad: 46 ");
		getch();
		break;
	case 4 :
		//system("cls");
		printf("\n\n\n\n\n\n\n\n\n\n\n\n        Fin del programa.(Idea original by Mauricio Garcia) \n        Presione una tecla para finalizar. ");
		getch();
		break;
	default:
		//system("cls");
		printf("\n\n\n\n\n\n\n\n\n\n ESCOJA UNA OPCION VALIDA(numerica 1,2,3 o 4)");
		getch();
}