#include<iostream>
using namespace::std;

int main(){
    cout<<"Hola mundo"<<endl;
    int i;
    cout<<nouppercase<<std::hex<<255;//imprime el valor hexadecimal 
    cout<<endl;
    cout<<uppercase<<hex<<255;//imprime el valor hexadecimal pero en mayusculas
    cout<<endl;
    cout<<oct<<255;//imprime en octal
    cout<<endl;
    cout<<scientific<<3.1416;//imprime en notacion cientifica
    cout<<endl;
    cout<<std::fixed << 3.1416;//imprime en notacion fija
    cout<<endl;
    cout<<dec;//decimal
    cout<<showpos<<255;//muestra el signo positivo 
    cout<<endl;
    cout<<boolalpha<<true;//imprime el significado del valor booleano (true/false)
    cout<<endl;
    cout<<noboolalpha<<true;//inprime el valor booleano (1/0)
    cout<<endl;
    cout<<showpoint<<3.00000;//muestra el punto decimal aunque despues solo haya ceros
    cout<<endl;
    cout<<flush;//limpia la salida
    cout.flags(std::ios::hex|std::ios::boolalpha);//sirve para cambiar varias de las anteriores en una sola linea
    cout<<512<<endl;

    cout.setf(std::ios::showpoint);
    cout<<1.00000<<endl;
    //se acumulan
    return 0;
}