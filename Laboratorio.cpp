#include "Laboratorio.h"

Laboratorio::Laboratorio(){

    cont = 0;
}

void Laboratorio::agregarComputadora(const Computadora &c){

    if(cont < 5){
        arreglo[cont] = c;
        cont++;
    }else{
        cout<<"Arreglo lleno"<<endl;
    }
}

void Laboratorio::mostrarComputadora(){
    for(size_t i = 0; i < cont; i++){
        Computadora &c = arreglo[i];

        cout<<"Componentes de la computadora"<<i+1<<endl;
        cout << "Marca: ",c.getMarca();
        cout << "Ram: " << c.getRam() << endl;
        cout << "Sistema operativo: ",c.getSo();
        cout << "Disco duro: " << c.getMemoria() << endl;
        


    }
}