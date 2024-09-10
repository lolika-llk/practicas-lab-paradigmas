#include<stdio.h>

int main(){
    int a,i;
    scanf("%d",&a);

    dowhile:                //realiza la accion
    printf("%d\n",i);
    i++;
    if(i<=a){               //hace la comprobacion
        goto dowhile;       //si es verdadera regresa a la accion
    }                       //si es falsa no hace nada

    return 0;    
}