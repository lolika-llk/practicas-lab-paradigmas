#include<stdio.h>

int main(){
    int a;
    scanf("%d",&a);

    //comprobaciones, este si se parece mas a su forma normal.
    if(a%2==0){
        goto par;
    }
    if(a%2!=0){
        goto impar;
    }
    goto predet;

    //casos
    par:                                //caso 1 si es par
        printf("el numero %d es par",a);
        goto final;
    impar:                              //caso 2 si es impar
        printf("el numero %d es impar",a);
        goto final;
    predet:                             //caso si ninguno
        printf("entrada no valida");
        goto final;
    final:                              //esta etiqueta reemplaza al break


    return 0;
}