#ifndef COMPUTADORA_H
#define COMPUTADORA_H

#include <iostream>
using namespace std;

class Computadora{
    
private:
    string marca;
    int ram;
    string so;
    int memoria;
public:
    Computadora(){};
    Computadora(const string &marca,int ram,const string &so, int memoria); 

    void setMarca(const string &v);
    string getMarca();

    void setRam(int v);
    int getRam();

    void setSo(const string &v);
    string getSo();

    void setMemoria(int v);
    int getMemoria();

};

#endif