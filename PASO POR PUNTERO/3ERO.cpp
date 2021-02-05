#include <iostream>
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */

using namespace std;
void imprimirArreglo(float *pA, int n);
void llenarA(float *pA, int n);
void resultC(float *pA,int escalar, int n);


int main()
{
    int n = 50;
    int e = 5;
    int escalar = 5;
    float A[n],R[n];
    llenarA(&A[0],n);
    imprimirArreglo(&A[0],n);

    resultC(&A[0],escalar,n);
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

void llenarA(float *pA, int n)
{
    for(int i=0;i<n;i++)
    {
    pA[i] = 1;
    }
}

void resultC(float *pA,int escalar, int n)
{

    for(int i=0;i<n;i++)
    {
    pA[i] = pA[i] * escalar;
    }
}