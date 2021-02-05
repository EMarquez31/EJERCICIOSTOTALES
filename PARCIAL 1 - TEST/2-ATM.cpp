#include <iostream>

using namespace std;

int main ()
{
    int fondos=0;
    int retiro=0;
    int mil=1000;
    int residuo=0;
    int cambio50=0;
    int cambio20=0;
    int cambio10=0;
    int cambio5=0;
    int cambio2=0;
    int cambio1=0;


    cout<<"De cuanto es el valor de sus fondos"<<endl;
    cin>>fondos;

    cout<<"Cuanto dinero desea retirar"<<endl;
    cin>>retiro;




    if (fondos<retiro)
    {
        cout<<"Usted no posee fondos para esta transaccion, no es posible realizar la transacción"<<endl;
    }
    else
    {
        residuo = retiro % mil;

    
        if(residuo == 0)
    {
        if(retiro >= 50000)
    {
        cambio50= retiro/50000;
        retiro = retiro % 50000;
    }
    
    if(retiro >= 20000)
    {
        cambio20= retiro/20000;
        retiro = retiro % 20000;
    }

    
    if(retiro >= 10000)
    {
        cambio10= retiro/10000;
        retiro = retiro % 10000;
    }

    
    if(retiro >= 5000)
    {
        cambio5= retiro/5000;
        retiro = retiro % 5000;
    }

    
    if(retiro >= 2000)
    {
        cambio2= retiro/2000;
        retiro = retiro % 2000;
    }

    
    if(retiro >= 1000)
    {
        cambio1= retiro/1000;
        retiro = retiro % 1000;
    }

    cout<<"Su cambio es : "<<endl;
    cout<<cambio50<<" Billete/s de 50 "<<endl;
    cout<<cambio20<<" Billete/s de 20 "<<endl;
    cout<<cambio10<<" Billete/s de 10 "<<endl;
    cout<<cambio5<<" Billete/s de 5 "<<endl;
    cout<<cambio2<<" Billete/s de 2 "<<endl;
    cout<<cambio1<<" Billete/s de 1 "<<endl;
      
    }
    }

    if(residuo != 0)
    {
        cout<<"Solo valores multiplos de 1000";
    }
}