#include<iostream>
using namespace std ;
int fibo(int pos){
    if (pos>1){
        return fibo(pos-1)+fibo(pos-2);
    } else {
        if(pos==0){
            return 0;
        }
        if(pos==1){
            return 1;
        }
    }
    }
int main(){

    int n;

    cout<<"Ingrese la posicion que quiere encontrar de fibonacci"<<endl;
    cin>>n;
    cout<<"El resultado de esa serie es "<<fibo(n);





    

 return 0;
}