#include <iostream>
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */

using namespace std;

void imprimirArreglo(float *pA, int n);
void llenarAleatorios(float *pA, int n);
float mayordeMatriz(float *pA, int n);




int main()
{

    int n;
    cout<<"ingrese su valor n"<<endl;
    cin>>n;
    
    int valor;
    float A[n];

    llenarAleatorios(&A[0],n);
    imprimirArreglo(&A[0],n);
    cout<<"El mayor numero del arreglo es = ";
    cout<<mayordeMatriz(&A[0],n)<<endl;
    

    
    
}

void imprimirArreglo(float *pA, int n)
{
    cout<<endl;
    for(int i=0;i<n;i++)
    {
         cout<<pA[i]<<" ";
    }cout<<endl;
}

void llenarAleatorios(float *pA, int n)
{
    srand (time(NULL));
    for(int i=0;i<n;i++)
    {
        pA[i] = rand() % 100 + 1;
    }
}

float mayordeMatriz(float *pA, int n)
{
    float mayor = pA[0];
    for(int i=0;i<n;i++)
    {

            if(pA[i] > mayor)
            {
                mayor = pA[i];
        }
    }
    return mayor;

}
