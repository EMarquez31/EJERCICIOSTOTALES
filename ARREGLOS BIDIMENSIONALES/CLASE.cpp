#include <iostream>
#include <math.h>
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */

using namespace std;

int main()
{
    int nf,nc;

    cout<<"Por favor ingrese el numero de filas de su arreglo"<<endl;
    cin>>nf;

    cout<<"Por favor ingrese el numero de columnas de su arreglo"<<endl;
    cin>>nc;

    int matrizA[nf][nc],matrizB[nf][nc],escalar=5;
    srand (time(NULL));
    cout<<endl<<endl<<"matriz A ="<<endl;
    for(int i=0;i<nf;i++)
    {
        for(int j=0;j<nc;j++)
        {
            matrizA[i][j] =  rand() % 10 + 1;
        }
    }

    for(int i=0;i<nf;i++)
    {
        for(int j=0;j<nc;j++)
        {
            cout<<matrizA[i][j]<<" ";
        }cout<<endl;
    }
    cout<<endl<<"Matriz B = Matriz A * escalar"<<endl;
    for(int i=0;i<nf;i++)
    {
        for(int j=0;j<nc;j++)
        {
            matrizB[i][j] =  matrizA[i][j]*escalar;
        }
    }

    for(int i=0;i<nf;i++)
    {
        for(int j=0;j<nc;j++)
        {
            cout<<matrizB[i][j]<<" ";
        }cout<<endl;
    }

}