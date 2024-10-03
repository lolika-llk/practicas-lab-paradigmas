#include<stdio.h>

int main(){
    //variables
    float numfloat;
    double numdouble;
    numfloat=3.14159265; //hex: 0x40490fdb
    numdouble=3.14159265;//hex: 0x400921FB53C8D4F1
    //apuntador char para leer byte a byte
    char *p;
    p=(char *)&numfloat+3;
    //imprimir float
    printf("float: %f\n\t0x", numfloat);
    for(int i=0;i<4;i++,p-=1){
        printf("%02hhx",*p);
    }
    //imprimir double
    printf("\n\ndouble: %lf\n\t0x", numdouble);
    p=(char *)&numdouble+7;
    for(int i=0;i<8;i++,p--){
        printf("%02hhx", *p);
    }
}
//_llk