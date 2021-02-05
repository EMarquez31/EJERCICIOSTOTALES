#include <iostream>
#include <math.h>

using namespace std;

int main ()
{

    long double sumatoria1,sumatoria2;
    float x;
    long double factorial;

    cout<<"Escriba x"<<endl;
    cin>>x;

    for(int n; n<=100; n++)
    {
        sumatoria1 = (pow(x,n))+sumatoria1;
    }

        for(int n; n<=100; n++)
    {
        sumatoria2 = factorial*n;
    }

    cout<<sumatoria1<<endl;
    cout<<sumatoria2<<endl;
}