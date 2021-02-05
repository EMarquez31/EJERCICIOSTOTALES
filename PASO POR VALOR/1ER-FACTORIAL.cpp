#include <iostream>

using namespace std;

void funcionpasoReferencia(int entrada1, int &salida1, int &salida2, int &salida3);
int funcionpasoValor(int entrada1,int entrada2, int entrada3);

int main()
{
    int entrada=1, sal1,sal2,sal3;
    funcionpasoReferencia(entrada, sal1,sal2,sal3);
    cout<<entrada<<"  "<<sal1<<" "<<sal2<<" "<<sal3<<endl; 
    cout<<"Hola Mundo"<<endl;
}

void funcionpasoReferencia(int entrada1, int &salida1, int &salida2, int &salida3)
{
    salida1 = entrada1*1;
    salida2 = entrada1*2;
    salida3 = entrada1*3;
}

int funcionpasoValor(int entrada1,int entrada2, int entrada3)
{
    int resultado=1;
    //instrucciones de la función
    return resultado;
}