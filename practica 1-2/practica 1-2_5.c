#include<stdio.h>
int main(){
    char a='a';
    unsigned char b='b';
    int c=-2147483648;//min
    unsigned int d=4294967295;//max
    long e=-2147483648;//min
    unsigned long f=4294967295;//max
    long long g=-922337203685477808;//min
    unsigned long long h=18446744073709551615;//max 
    float i=3.5;
    double j=3.5;
    long double k=3.5;

    printf("char:\n\ttamaño:%d\n\tcontenido:%c\n",sizeof(a),a);
    printf("unsigned char:\n\ttamaño:%d\n\tcontenido:%c\n",sizeof(b),b);
    printf("int:\n\ttamaño:%d\n\tcontenido:%d\n",sizeof(c),c);
    printf("unsigned int:\n\ttamaño:%d\n\tcontenido:%u\n",sizeof(d),d);
    printf("long:\n\ttamaño:%d\n\tcontenido:%ld\n",sizeof(e),e);
    printf("unsigned long:\n\ttamaño:%d\n\tcontenido:%lu\n",sizeof(f),f);
    printf("long long:\n\ttamaño:%d\n\tcontenido:%lld\n",sizeof(g),g);
    printf("unsigned long long:\n\ttamaño:%d\n\tcontenido:%llu\n",sizeof(h),h);
    printf("los siguientes tienen un valor de 3.5 ya que no es posible poner el valor minimo o maximo.\n");
    printf("float:\n\ttamaño:%d\n\tcontenido:%f\n",sizeof(i),i);
    printf("double:\n\ttamaño:%d\n\tcontenido:%lf\n",sizeof(j),j);
    printf("long double:\n\ttamaño:%d\n\tcontenido:%Lf\n",sizeof(k),k);
    

    return 0;
}