#include <iostream>
using namespace std;
int main(){
    int n=9,num;
    int arregloA[n];
    int *parregloA = &arregloA[0];


    for(int i = 0; i < n; i++)
    {
        cout<<"Ingrese 10 numeros que se mostraran en pantalla"<<endl;
        cin>>num;
        parregloA[i]=num;
    }
    
        for(int i = 0; i < n; i++)
    {
        cout<<parregloA[i]<<" ";
    }cout<<endl;



}