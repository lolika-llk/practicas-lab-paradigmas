#include<stdio.h>

int main(){
    int a,i;
    scanf("%d",&a);

    inicio:
    if(i<=a){               //se verifica la expresion
        goto mientras;      //si es verdadera hace la accion
    }
    goto salir_bucle;       //si es falsa sale del bucle
    mientras:               //la accion a realizar
    printf("%d\n",i);
    i++;
    goto inicio;            //regresa a la verificacion
    salir_bucle:            //salida del bucle
    return 0;    
}