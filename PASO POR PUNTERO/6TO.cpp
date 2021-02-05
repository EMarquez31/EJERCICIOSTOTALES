#include <iostream>
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */

using namespace std;
void imprimirArreglo(float *pA, int n);
void llenarUnos(float *pA, int n);
float sumaimpares(float *pA, int n);



int main()
{
    int n;

    cout<<"ingrese su valor n"<<endl;
    cin>>n;

    float A[n];

    llenarUnos(&A[0],n);
    imprimirArreglo(&A[0],n);
    cout<<"La suma de los impares es ";
    sumaimpares(&A[0],n);

    
}

void imprimirArreglo(float *pA, int n)
{
    cout<<endl;
    for(int i=0; i<n ; i++)
    {
        cout<<pA[i]<<" ";
    }cout<<endl;
}

void llenarUnos(float *pA, int n)
{
    for(int i=0; i<n; i++)
    {
    pA[i] = ((i*2)+1);
    }
}



float sumaimpares(float *pA, int n)
{
    int resul = 0;

    for(int i=0; i<=n ;i=((i*2)+1))
    {
    resul = resul + pA[i];
    }
    return resul ;
}
