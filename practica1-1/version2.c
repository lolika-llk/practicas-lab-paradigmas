//eliminar operaciones innecesarias y simplificar el ciclo compila pero no hace nada (problema de write que surgio al incluir unistd)
#include<unistd.h>
int i;
main(){
    for(;i<14;
        read(0,i+++"hello, world!\n",1));
}
read(j,i,p){//no se puede usar el nombre read para la funcion porque en la libreria unistd hay una funcion con ese nombre

    write(1,i---j,1);//las operaciones siempre dan lo mismo, se necesita la libreria unistd
}