#include <iostream>

using namespace std;

int main()
{
    int arreglo5[50],resultado;
    for(int i=0 ; i<50 ;i++)
    {
        arreglo5[i]=1;
        resultado = 5*arreglo5[i];
    }
    cout<<endl<<endl<<endl;
    cout<<"Vector de 50 posiciones"<<endl;
    for (int i = 0; i < 50 ; i++)
    {

    cout<<arreglo5[i]<<"  ";
    }
    cout<<endl<<endl;
    cout<<"Multplicado por un escalar (5), El resultado es:"<<endl;
    for (int i = 0; i < 50 ; i++)
    {

        cout<<resultado<<"  ";
    }


    return 0;
}