//cambiar write con printf (de la libreria unistd a la libreria stdio), compila en gcc
#include<stdio.h>
int i;
int main(){
    char a[14]="hello, world!\n";//se saco esta parte del printf porque el compilador no deja llamar a la funcion printf de esa manera
    while(i<14){
        printf("%C",a[i]);//0,&"hello, world!\n"[i],1
        i++;
    }
    return 0;
}