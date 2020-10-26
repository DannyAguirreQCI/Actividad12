#include <iostream>
#include "arreglo.h"
using namespace std;

int main()
{
    ArregloDinamico arreglo;
    arreglo.insertar_final("Danny");
    arreglo.insertar_final("Aguirre");
    arreglo.insertar_final("Vazquez");
    arreglo.insertar_final("Dissidia");
    arreglo.insertar_final("Final");
    arreglo.insertar_final("Fantasy");
    arreglo.insertar_final("Opera");
    arreglo.insertar_final("Omnia");

    for (size_t i=0; i<arreglo.size(); i++)
    {
        cout<<arreglo[i]<<" ";
    }

    cout<<endl;

    arreglo.insertar_inicio("Brave");
    arreglo.insertar_inicio("Exvius");

    for (size_t i=0; i<arreglo.size(); i++)
    {
        cout<<arreglo[i]<<" ";
    }
}
