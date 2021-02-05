#include <iostream>
using namespace std;
int main(){
    int n=50,contador;
    int arregloA[n][n];
    int arregloB[n][n];
    int escalar=5;
    int *parregloA = &arregloA[0][0];
    int *parregloB = &arregloB[0][0];

    for(int i = 0; i < n; i++)
    {
        for(int j = 0;j < n; j++)
        {
            parregloA[ i * n + j ]  = 1;
        }
    }

    for(int i = 0; i < n; i++)
    {
        for(int j = 0;j < n; j++)
        {
            parregloB[i * n + j] = parregloA[i * n + j] * escalar;
        }
    }
    
        for(int i = 0; i < n; i++)
    {
        for(int j = 0;j < n; j++)
        {
            cout<<parregloA[ i * n + j ]<<" ";
        }cout<<endl;
    }

            for(int i = 0; i < n; i++)
    {
        for(int j = 0;j < n; j++)
        {
            cout<<parregloB[ i * n + j ]<<" ";
        }cout<<endl;
    }


    
    

}