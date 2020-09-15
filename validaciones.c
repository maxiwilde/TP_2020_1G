#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int finalizar(char a){
    char salir;
    int continuar;
if (a=='q'){
    printf("Esta Seguro que desea salir S/N: ");
    fflush(stdin);
    salir=tolower(getchar());
    if (salir=='s'){
                continuar=0;
            }else{
                continuar=1;
            }

    }
    return continuar;
}
int operador (int a){
while(a==0){
        printf("Error No Se Puede Dividir al 0 \n");
        printf("Reingrese Operando: ");
        fflush(stdin);
        scanf("%d", &a);
}
return a;
}
