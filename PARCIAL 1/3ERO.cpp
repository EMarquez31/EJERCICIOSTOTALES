#include <iostream>
#include <math.h>

using namespace std;

int main (){

    int n;
    int nv;
    int maximo=0;
    int minimo=0;
    float prom;

    cout<<"\nIngrese la cantidad de numeros que va a digitar, recuerde que el numero 0 no es permitido en esta programacion, lo retornara"<<endl;
    cin>>n;

    if(n<=0){
        cout<<"\nIngrese solo numeros enteros positivos y recuerde que el 0 no es permitido en esta programacion"<<endl;
        return main();
    }
    else{

    


    for(int i=1; i<=n; i++){

        
        cout<<"Ingrese su valor numerico "<<i<<endl;
        cin>>nv;

        prom = nv + prom;

        if(nv==0){

            return main();
        }

        if(i==1){

            minimo = nv;
            cout<<"\nNo se leen 0 (ceros) como valores numericos"<<endl;
        }
        else{

            if (nv < minimo)
                minimo = nv;
            
        }
    }
    }

    cout<<"El numero menor era "<<minimo<<endl;

    prom = prom/n;

     cout<<"El promedio es "<<prom<<endl;



    return 0;
}