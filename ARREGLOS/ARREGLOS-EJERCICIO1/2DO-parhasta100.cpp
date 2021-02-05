#include <iostream>
using namespace std;
int main(){

    int arreglo[100];

    for (int i=0; i<=100; i=i+2){


        arreglo[i] = i;

    }

    for (int i=0; i<=100; i=i+2){

        cout<<arreglo[i]<<" ";

    }
}