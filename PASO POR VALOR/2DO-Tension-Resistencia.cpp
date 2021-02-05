#include <iostream>
using namespace std;

float fun(float r1,float r2,float r3,float fuente,float corriente,float tension);
int main()
{
    float r1,r2,r3,fuente,corriente,tension;
    corriente = fun(r1,r2,r3,fuente,corriente,tension);
    cout<<"La corriente total del circuito es: "<<corriente<<endl;

    return 0;
}

 float fun(float r1,float r2,float r3,float fuente,float corriente, float tension)
    {

      int  opcion;
     cout<<"Digite 1. si el circuito esta en serie, digite 2. si el circuito esta en paralelo"<<endl;
     cin>>opcion;
     if (opcion==1)
     {
        cout<<"Ingrese el valor de la resistencia 1"<<endl;
        cin>>r1;
        cout<<"Ingrese el valor de la resistencia 2"<<endl;
        cin>>r2;
        cout<<"Ingrese el valor de la resistencia 3"<<endl;
        cin>>r3;
        cout<<"Ingrese el valor de la fuente de tension en dc"<<endl;
        cin>>fuente;
        tension = fuente;
        corriente = (fuente/(r1+r2+r3));
        cout<<"La tension total del circuito es:"<<tension<<endl;
        return corriente;

     }

     if (opcion==2)
     {

        cout<<"Ingrese el valor de la resistencia 1"<<endl;
        cin>>r1;
        cout<<"Ingrese el valor de la resistencia 2"<<endl;
        cin>>r2;
        cout<<"Ingrese el valor de la resistencia 3"<<endl;
        cin>>r3;
        cout<<"Ingrese el valor de la fuente de tension en dc"<<endl;
        cin>>fuente;
        tension = fuente;
        corriente = fuente/(1/((1/r1)+(1/r2)+(1/r3)));
        cout<<"La tension total del circuito es:"<<tension<<endl;
        return corriente;

     }

    }
