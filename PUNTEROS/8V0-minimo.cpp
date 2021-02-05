//-Desarrolle un programa que calcule el valor mínimo en un arreglo de tamaño nxn
#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;
int main(){

    int n;
    int minimo;


    srand (time(NULL));
    cout<<"ingrese su valor n"<<endl;
    cin>>n;

    int arregloA[n][n];
    int *parregloA = &arregloA[0][0];

    for(int i = 0; i < n; i++)
    {
        for(int j = 0;j < n; j++)
        {
           parregloA[ i * n + j ]  = rand() % 10 + 1;
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

    minimo = parregloA[0];
    for (int i = 0; i < n; i++){
         for (int j = 0; j < n; j++){
             if ( minimo > parregloA[ i * n + j ]){
                 minimo = parregloA[ i * n + j ];
             }
         }
         
    }
    
    cout<< "el numero minimo es "<< minimo;
}