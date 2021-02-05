#include <iostream>
using namespace std;
int main(){
    int arregloA[50];
    int arregloB[50];
    int escalar;

    cout<<"Ingrese el número escalar"<<endl;
    cin>>escalar;

    for (int i=0; i<=50; i++){


        arregloA[i] = i;

    }

    for (int i=0; i<=50; i++){

        cout<<arregloA[i]<<" ";

    }
    //Operación escalar

    cout<<endl;

    for (int i=0; i<=50; i++){


        arregloB[i] = arregloA[i] * escalar;

    }
        for (int i=0; i<=49; i++){

        cout<<arregloB[i]<<" ";

    }


}




