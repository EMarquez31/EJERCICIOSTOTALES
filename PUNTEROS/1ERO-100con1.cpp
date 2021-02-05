#include <iostream>
using namespace std;
int main(){
    int n=100;
    int arregloA[n];
    int *parregloA = &arregloA[0];

    for(int i = 0; i < n; i++)
    {
        parregloA[i]=1;
    }
    
        for(int i = 0; i < n; i++)
    {
        cout<<parregloA[i]<<" ";
    }cout<<endl;



}
