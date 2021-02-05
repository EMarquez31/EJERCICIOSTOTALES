#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;

int main (){
    int arregloaletarorios[10];
    srand (time(NULL));

    for(int i=0; i<10; i++){
        arregloaletarorios[i]= rand() % 10 + 1;   
        }

    for(int i=0; i<10; i++){
        cout<<arregloaletarorios[i]<<" ";
        }
}