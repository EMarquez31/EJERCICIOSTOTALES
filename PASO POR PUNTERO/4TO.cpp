#include <iostream>
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */

using namespace std;
void imprimirArreglo(float *pA, int n);
void ingresarnumeros(float *pA, int n, int num);


int main()
{
    int n = 10;
    int num;
    float A[n];
    ingresarnumeros(&A[0],n,num);
    imprimirArreglo(&A[0],n);
    
    
}

void imprimirArreglo(float *pA, int n)
{
    cout<<endl;
    for(int i=0;i<=n;i++)
    {
         cout<<pA[i]<<" ";
    }cout<<endl;
}

void ingresarnumeros(float *pA, int n, int num)
{
    for(int i = 0; i < n; i++)
    {
        cout<<"Ingrese 10 numeros que se mostraran en pantalla"<<endl;
        cin>>num;
        pA[i]=num;
    }

}