#include <iostream>
#include <math.h>
using namespace std;
int main ()
{
    float NumTotal; 
    float Nota;
    float NumSuma;

     cout<<"Recuerde que el primer porcentaje (20%) es para las notas 1 y 2, el segundo procentaje (30%) es para la nota 2 y 3"<<endl;

       

    for(int i=1 ; i<=2 ; i++)
    {
        if (i=1)
        {
            NumSuma = (Nota) * (0.20);
        }

        cout<<"Escriba su nota numero "<<i<<endl;
        cin>>Nota;

       NumTotal = Nota+NumTotal;


        cout<<"representa i =  "<<i<<endl;
        cout<<"representa nota =  "<<Nota<<endl;
        cout<<"representa Numsuma = "<<NumSuma<<endl;
        

    }
    

    cout<<"El resultado de sus notas es "<<NumTotal/4<<endl;
    cout<<"El resultado de sus Numsuma es "<<NumSuma<<endl;

    return 0;

}