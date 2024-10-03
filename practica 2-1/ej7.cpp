#include<iostream>
#include<limits>//para poder ignorar lo que sigue de la linea hasta el \n si se introduce mas texto
using namespace::std;
int main(){
    int i;
    cout<<"Ingrese un numero"<<endl;
    cin>>i;
    while (cin.fail())
    {
        cout<<"Tiene que ser un numero"<<endl;
        cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');//ignorar hasta el \n
        cin>>i;
    }
    cout<<i<<endl;
    
    return 0;
}