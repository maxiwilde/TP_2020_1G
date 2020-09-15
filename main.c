#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "funciones.h"
#include "validaciones.h"
int main(){
    int x;
    int y;
    char opcion;
    int continuar='1';
do{
    opcion= menu();
    continuar=finalizar(opcion);
    if(opcion!='q'){
    x=ingreso();
    y=ingreso();
    system("cls");
    printf("X Vale: %d \n" ,x);
    printf("Y Vale: %d \n" ,y);
    continuar=operacion(opcion,x,y);
    system("pause");
    }
    }
while (continuar=='1');
return 0;
}
