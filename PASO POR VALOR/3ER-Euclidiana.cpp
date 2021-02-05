#include <iostream>
#include <math.h>
using namespace std;

float fun(float x0,float x1,float y0,float y1,float res);
int main()
{
    float x0,x1,y0,y1,res;

    cout<<"Ingrese x0"<<endl;
    cin>>x0;
    cout<<"Ingrese x1"<<endl;
    cin>>x1;
    cout<<"Ingrese y0"<<endl;
    cin>>y0;
    cout<<"Ingrese y1"<<endl;
    cin>>y1;
    cout<<"El resultado es "<<fun(x0,x1,y0,y1,res)<<endl;



    return 0;
}

float fun(float x0,float x1,float y0,float y1,float res)
{
    res=sqrt((x1-x0)*(x1-x0)+(y1-y0)*(y1-y0));
    return res;

}