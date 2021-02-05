#include <iostream>
#include <math.h>
using namespace std;
void funcionpasoReferencia(float a,float b,float c, float &salida1, float &salida2);


int main()
{
    float aR,bR,cR,sal1,sal2;
    cout<<"Ingrese a"<<endl;
    cin>>aR;

    cout<<"Ingrese b"<<endl;
    cin>>bR;

        cout<<"Ingrese c"<<endl;
    cin>>cR;

    funcionpasoReferencia(aR,bR,cR,sal1,sal2);
    cout<<"X1 "<<sal1<<endl;
    cout<<"X2 "<<sal2<<endl;


}
void funcionpasoReferencia(float a,float b,float c,float &salida1, float &salida2)
{
    salida1 = (-b/2*a)+((sqrt(b*b-4*a*c))/2*a);
    salida2 = (-b/2*a)-((sqrt(b*b-4*a*c))/2*a);
} 