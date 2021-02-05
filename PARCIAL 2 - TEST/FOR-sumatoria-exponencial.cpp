#include <iostream>
#include <math.h>

using namespace std;
 int main()
 {
     long double Sumat;
     float x;
     long double numerador;
     long double factorial=1;

     cout<<"Recuerde que vamos a aproximar una función exponencial respecto a una sumataroia, que x desea escribir [e^x]"<<endl;
     cin>>x;


     for (int n=0; n<=100; n++)
     {
         numerador = pow(x,n);

         factorial = factorial*n;

         Sumat = numerador+numerador/factorial+factorial;
     }
     cout<<"El numerador sería = "<<numerador<<endl;
    cout<<"El factorial de 100 seria = "<<factorial<<endl;

cout<<"El resultado para esta sumatoria que representa el e^x es  "<<Sumat;

 }