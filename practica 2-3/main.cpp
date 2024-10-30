#include<iostream>
#include"complejo.h"
using namespace::std;

int main(){
    complejo a=complejo(5,5);
    complejo b=complejo(2,4);
    complejo d;
    cout<<"Operaciones complejo complejo"<<endl;
    d=a+b;
    cout<<d<<endl;
    d=a-b;
    cout<<d<<endl;
    d=a*b;
    cout<<d<<endl;
    d=a/b;
    cout<<d<<endl;
    cout<<endl<<"Operaciones complejo double"<<endl;
    d=a+2.0;
    cout<<d<<endl;
    d=a-4.0;
    cout<<d<<endl;
    d=a*2.0;
    cout<<d<<endl;
    d=a/2.0;
    cout<<d<<endl;
    cout<<endl<<"Operaciones double complejo"<<endl;
    d=2.0+a;
    cout<<d<<endl;
    d=2.0-a;
    cout<<d<<endl;
    d=4.0*a;
    cout<<d<<endl;
    d=2.0/a;
    cout<<d<<endl;
    return 0;
}