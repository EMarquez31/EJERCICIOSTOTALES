#include <iostream>
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */

using namespace std;
void imprimirArreglo(float *pA, int n);
void llenarAleatorios(float *pA, int n);
float menordeMatriz(float *pA, int n);

int main()
{
    int n;
    float A[n][n];

        cout<<"ingrese su valor n"<<endl;
    cin>>n;


    llenarAleatorios(&A[0][0],n);
    imprimirArreglo(&A[0][0],n);
    cout<<"El menor numero del arreglo es = ";
    cout<<menordeMatriz(&A[0][0],n)<<endl;
    
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
float menordeMatriz(float *pA, int n)
{
    float menor = pA[0];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(pA[i*n+j] < menor)
            {
                menor = pA[i*n+j];
            }
        }
    }
    return menor;

}