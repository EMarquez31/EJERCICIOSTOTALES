#include <iostream>
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */

using namespace std;
void imprimirArreglo(float *pA, int n);
void llenarUnos(float *pA, int n);


int main()
{
    int n = 100;
    float A[n];
    llenarUnos(&A[0],n);
    imprimirArreglo(&A[0],n);
    
    
}

void imprimirArreglo(float *pA, int n)
{
    cout<<endl;
    for(int i=0;i<n;i++)
    {
         cout<<pA[i]<<" ";
    }cout<<endl;
}

void llenarUnos(float *pA, int n)
{
    for(int i=0;i<n;i++)
    {
    pA[i] = 1;
    }
}
