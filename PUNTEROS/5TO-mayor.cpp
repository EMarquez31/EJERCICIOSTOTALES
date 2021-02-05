#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;
int main(){

    int n=0;
    int mayor=0;
    int menor=0;

    srand (time(NULL));
    cout<<"ingrese su valor n"<<endl;
    cin>>n;

    int arregloA[n];
    int *parregloA = &arregloA[0];

    for(int i = 0; i < n; i++)
    {
        parregloA[i]= rand() % 10 + 1;;
    }
    
        for(int i = 0; i < n; i++)
    {
        cout<<parregloA[i]<<" ";
    }cout<<endl;

        mayor = parregloA[0];

    for (int i = 0; i < n; i++){
                if ( mayor < parregloA[i]){
                 mayor = parregloA[i];
                }
    }

    cout<< "el numero mayor es "<< mayor<<endl;
    
    menor = parregloA[0];

    for (int i = 0; i < n; i++){
                if ( menor > parregloA[i]){
                 menor = parregloA[i];
                }
         }

    cout<< "el numero menor es "<< menor<<endl;

}