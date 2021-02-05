#include <iostream>
#include <math.h>
#define PI 3.14159265
using namespace std;

float fun(float radio);
int main()
{
    float radiousuario,result;

    cout<<"Digite el radio"<<endl;
    cin>>radiousuario;

    result= fun(radiousuario);
    cout<<"El area del circulo es:"<<result<<endl;


    return 0;
}

float fun(float radio)
{
    float area;
    area = PI*radio*radio;
    return area;

} 