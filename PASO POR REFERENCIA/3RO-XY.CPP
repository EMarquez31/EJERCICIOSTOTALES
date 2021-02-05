#include <iostream>
#include <math.h>
#define PI 3.14159265
using namespace std;

void funcionpasoReferencia(float a,float b, float &salida1, float &salida2);


int main()
{

    float entrada1,entrada2,sal1,sal2;
        cout<<"Este programa sirve para convertir de coordenadas cartesianas a polares"<<endl;
    cout<<"Ingrese x"<<endl;
    cin>>entrada1;
    cout<<"Ingrese y"<<endl;
    cin>>entrada2;

    funcionpasoReferencia(entrada1,entrada2,sal1,sal2);
    cout<<"r = "<<sal1<<endl;
    cout<<"Tetha = "<<sal2<<" grados"<<endl;

}
void funcionpasoReferencia(float a,float b, float &salida1, float &salida2)
{

    salida1 = sqrt((a*a+b*b));
    salida2 = atan (b/a) * 180 / PI ;


} 
