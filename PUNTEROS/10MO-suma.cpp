#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;

int main()
{
    int n = 0;
        srand (time(NULL));
            cout<<"ingrese su valor n"<<endl;
    cin>>n;
    int arregloA[n][n],arregloB[n][n],arregloC[n][n];
    int *parregloA = &arregloA[0][0];
    int *parregloB = &arregloB[0][0];
    int *parregloC = &arregloC[0][0];

    for(int i = 0; i < n; i++)
    {
        for(int j = 0;j < n; j++)
        {
           parregloA[ i * n + j ]  = rand() % 10 + 1;
        }
    }
    for(int i = 0; i < n; i++)
    {
        for(int j = 0;j < n; j++)
        {
           parregloB[ i * n + j ]  = rand() % 10 + 1;
        }
    }

    for(int i = 0; i < n; i++)
    {
        for(int j = 0;j < n; j++)
        {
           parregloC[ i * n + j ]  = parregloA[ i * n + j] + parregloB[ i * n + j] ;
        }
    }    
    cout<<"Arreglo A"<<endl;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0;j < n; j++)
        {
           cout<<parregloA[ i * n + j ]<<" ";  
        }cout<<endl;
    }
    cout<<"Arreglo B"<<endl;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0;j < n; j++)
        {
           cout<<parregloB[ i * n + j ]<<" ";  
        }cout<<endl;
    }
    cout<<"Arreglo C"<<endl;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0;j < n; j++)
        {
           cout<<parregloC[ i * n + j ]<<" ";  
        }cout<<endl;
    }
    




}