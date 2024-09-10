#include<stdio.h>

int main(){
    int a;
    scanf("%d",&a);

    init:
    int i=0;                //init,se ejecuta 1 vez antes de entrar al ciclo
    expresion:              //se evalua la expresion
    if(i<=a){
        goto accion;        //si es verdadera hace la accion
    }
    goto salir;             //si es falsa sale del ciclo
    accion:                 //accion a iterar
    printf("%d\n",i);   
    goto post;              //finaliza la accion y pasa al post
    
    post:                   //se ejecuta el post 
    i++;
    goto expresion;         //regresa a la verificacion
    salir:                  //para salir del bucle

    return 0;
}