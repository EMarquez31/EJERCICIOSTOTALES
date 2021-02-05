#include <iostream>
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */

using namespace std;
void imprimirArreglo(float *pA, int n);
void llenarUnos(float *pA, int n);
void llenarIdentidad(float *pA, int n);
void sumarMatrices(float *pA, float *pB, float *pC, int n);
void llenarAleatorios(float *pA, int n);
float mayordeMatriz(float *pA, int n);

int main()
{
    int n = 7;
    float A[n][n],B[n][n],C[n][n];
    /*llenarUnos(&A[0][0],n);
    imprimirArreglo(&A[0][0],n);
    
    llenarIdentidad(&B[0][0],n);
    imprimirArreglo(&B[0][0],n);
    
    sumarMatrices(&A[0][0],&B[0][0],&C[0][0],n);
    imprimirArreglo(&C[0][0],n);*/

    llenarAleatorios(&A[0][0],n);
    imprimirArreglo(&A[0][0],n);
    cout<<"El mayor numero del arreglo es = ";
    cout<<mayordeMatriz(&A[0][0],n)<<endl;
    
}

void imprimirArreglo(float *pA, int n)
{
    cout<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<pA[i*n + j]<<" ";
        }cout<<endl;
    }cout<<endl;
}

void llenarUnos(float *pA, int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            pA[i*n+j] = 1;
        }
    }
}

void llenarIdentidad(float *pA, int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==j)
            {
                pA[i*n+j] = 1;
            }
            else
            {
                pA[i*n+j] = 0;
            }
            
        }
    }

}

void sumarMatrices(float *pA, float *pB, float *pC, int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            pC[i*n+j] = pA[i*n+j] + pB[i*n+j];
        }
    }
}

void llenarAleatorios(float *pA, int n)
{
    srand (time(NULL));
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            pA[i*n+j] = rand() % 100 + 1;
        }
    }
}
float mayordeMatriz(float *pA, int n)
{
    float mayor = pA[0];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(pA[i*n+j] > mayor)
            {
                mayor = pA[i*n+j];
            }
        }
    }
    return mayor;

}