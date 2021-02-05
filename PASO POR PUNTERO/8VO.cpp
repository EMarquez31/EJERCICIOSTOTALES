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
    int n;
    float A[n][n],B[n][n],C[n][n];

    cout<<"ingrese su valor n"<<endl;
    cin>>n;

    
    llenarIdentidad(&B[0][0],n);
    imprimirArreglo(&B[0][0],n);
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
