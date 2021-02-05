//-Desarrolle un programa que genere una matriz identidad de tamaño nxn

#include <iostream>
using namespace std;
int main(){

    int n;


    cout<<"ingrese su valor n"<<endl;
    cin>>n;

    int arregloA[n][n];
    int *parregloA = &arregloA[0][0];

    for(int i = 0; i < n; i++)
    {
        for(int j = 0;j < n; j++)
        {
            if ( i == j){
                    parregloA[ i * n + j ] = 1;
             }
             else{
                    parregloA[ i * n + j ] = 0;
             }
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
}
