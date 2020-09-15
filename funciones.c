#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "funciones.h"
#include "validaciones.h"
int sumar(int a, int b ){
    int rdosuma;
    rdosuma= a+b;
    return rdosuma;
}
float dividir(int a, int b){
    float rdodivision;
    rdodivision= (float) a/b;
    return rdodivision;
}

int restar(int a, int b ){
    int rdoresta;
    rdoresta= a-b;
return rdoresta;
}
int multiplicar(int a, int b ){
    int rdomultiplicacion;
    rdomultiplicacion= a*b;
return rdomultiplicacion;
}
char menu(){
    char opcion;
    system("cls");
    printf("---------------MENU CALCULADORA---------------\n\n\n");
    printf("Operaciones Disponibles:\n\n");
    printf("A - Suma\n");
    printf("B - Resta\n");
    printf("C - Multiplicacion\n");
    printf("D - Division\n");
    printf("E - Factorial\n");
    printf("Q - Salir\n");
    printf("Ingrese Operacion a Realizar: ");
    fflush(stdin);
    scanf("%c",&opcion);
    opcion=tolower(opcion);
    return  opcion;
}
int ingreso(){
    int operando;
    printf("Ingrese El Operando: ");
    fflush(stdin);
    scanf("%d", &operando);
    return operando;

}
int factorial(int a){
     long long int rdofact = 1;
     for(int i=1;i<=a;i++){
        rdofact= rdofact * i;
     }
     return rdofact;
}
int operacion(char a,int x,int y){
    int continuar='1';
    switch(a){
        case'a':
        printf("La Suma es: %d\n", sumar(x,y));
        break;
        case'b':
        printf("La Resta es: %d\n", restar(x,y));
        break;
        case'c':
        printf("La Multiplicacion es :%d \n", multiplicar(x,y));
        break;
        case'd':
        x=operador(x);
        y=operador(y);
        printf("La division es: %f\n", dividir(x,y));
        break;
        case'e':
        printf("El factorial de X es :%d \n\n\n",factorial(x));
        printf("El factorial de y es :%d \n\n\n",factorial(y));
        break;
        default:
        printf("Opcion Incorrecta!. Intente Nuevamente\n");
        break;
    }
 return continuar;
}
