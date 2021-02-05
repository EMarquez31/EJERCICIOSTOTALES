#include <iostream>
#include <math.h>
using namespace std;
int main ()
{
    float Sumat = 0;
    int i = 0;

    while(i<=20)
    {
        Sumat = (pow(sin(i),3.0)+2)*(1/5.0) + Sumat;
        i++;
    }

    cout<<Sumat<<endl;
}