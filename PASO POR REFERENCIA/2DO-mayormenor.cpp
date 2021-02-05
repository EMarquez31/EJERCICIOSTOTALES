#include <iostream>
using namespace std;

void funcionpasoReferencia(float a,float b,float c, float &salida1, float &salida2);


int main()
{

    float entrada1,entrada2,entrada3,sal1,sal2;
        cout<<"Este programa calcula el numero mayor y menor de 3 numeros, digitelos"<<endl;
    cin>>entrada1;
    cin>>entrada2;
    cin>>entrada3;
    
    funcionpasoReferencia(entrada1,entrada2,entrada3,sal1,sal2);
    cout<<"El numero mayor es "<<sal1<<endl;
    cout<<"El numero menor es "<<sal2<<endl;

}
void funcionpasoReferencia(float a,float b,float c, float &salida1, float &salida2)
{
    

    if (a>b & a>c)
        {
        salida1=a; 
        }
    if (b>1 & b>c)
        {
        salida1=b; 
        }
    if (c>b & c>1)
        {
        salida1=c; 
        }
    if (a<b & a<c)
        {
        salida2=a; 
        }
    if (b<a & b<c)
        {
        salida2=a; 
        }
    if (c<b & c<1)
        {
        salida2=c; 
        }

} 