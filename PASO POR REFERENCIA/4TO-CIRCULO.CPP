#include <iostream>
#include <math.h>
#define PI 3.14159265
using namespace std;

void funcionpasoReferencia(float a,float &salida1, float &salida2);


int main()
{

    float entrada1,sal1,sal2;

    cout<<"Este programa sirve para calcular el area y radio de un circulo dada su circunferencia."<<endl;
    cin>>entrada1;

    funcionpasoReferencia(entrada1,sal1,sal2);
    cout<<"El radio es = "<<sal1<<endl;
    cout<<"El area es = "<<sal2<<endl;

}
void funcionpasoReferencia(float a,float &salida1, float &salida2)
{

    salida1 = (a)/(2*PI) ;
    salida2 = PI*a*a;


} 