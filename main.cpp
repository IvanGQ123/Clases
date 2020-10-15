#include <iostream>
#include <windows.h>
#include "Laboratorio.h"

using namespace std;



int main(){
  Computadora c01 = Computadora("HP",16,"Windows",1000);
  Computadora c02;
  Computadora c03;

  c02.setSo("Linux");
  c02.setMarca("HP");
  c02.setRam(32);
  c02.setMemoria(500);

  c03.setSo("MacOs");
  c03.setMarca("Apple");
  c03.setRam(8);
  c03.setMemoria(100);

  
  Laboratorio lb;

  lb.agregarComputadora(c01);
  lb.agregarComputadora(c02);
  lb.agregarComputadora(c03);

  lb.mostrarComputadora();
  
    system("Pause");
    
    return 0;
}