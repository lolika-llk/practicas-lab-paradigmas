#include<iostream>
#include"complejo.h"
using namespace::std;

int main(){
    complejo a=complejo(5,5);
    complejo b=complejo(2,4);
    complejo c=a.suma(b);
    complejo d=a.resta(b);
    complejo f=a.dividir(b);
    complejo e=a.multiplicar(b);
    c.imprimir();
    d.imprimir();
    e.imprimir();
    f.imprimir();
    
}