#include <iostream>
#include <math.h>
#include <time.h>
#include <stdlib.h>

using namespace std;

int main(){

    srand (time(NULL));
    int n = 4;
    int arreglo [n][n];
    int mayor = 0;

    for (int i = 0; i < n; i++){
         for (int j = 0; j < n; j++){
            arreglo[i][j] = rand () % 15 + 1;
         }
         
    }
    
    for (int i = 0; i < n; i++){
         for (int j = 0; j < n; j++){
             cout << arreglo[i][j]<<" ";
         }
        cout<<endl;
    }

    mayor = arreglo[0][0];
    for (int i = 0; i < n; i++){
         for (int j = 0; j < n; j++){
             if ( mayor < arreglo[i][j]){
                 mayor = arreglo[i][j];
             }
         }
         
    }
    cout<< "el numero mayor es "<< mayor;
}