//eliminar funciones innecesarias (la funcion read que se declara), compila pero no hace nada (problema de write que surgio al incluir unistd)
#include<unistd.h>
int i;
main(){
    while(i<14){
        write(1,i+++"hello, world!\n"[i],1);
    }
}