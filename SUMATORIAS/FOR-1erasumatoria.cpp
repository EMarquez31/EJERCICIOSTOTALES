#include <iostream>
#include <math.h>
using namespace std;
int main ()
{
    float Sumat = 0;

    for( int i = 0 ; i <= 20 ; i++)
    {
        Sumat = (pow(sin(i),3.0)+2)*(1/5.0) + Sumat;
    }

    cout<<Sumat<<endl;
}