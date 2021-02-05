#include <iostream>
using namespace std;
int main(){
    int n=100;
    int arregloA[n];
    int *parregloA = &arregloA[0];

    for(int i = 0; i < n; i=i+2)
    {
        parregloA[i]=i;
    }
    
        for(int i = 0; i < n; i=i+2)
    {
        cout<<parregloA[i]<<" ";
    }cout<<endl;



}