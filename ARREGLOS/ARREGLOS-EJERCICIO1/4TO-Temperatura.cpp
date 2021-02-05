#include <iostream>

using namespace std;

int main()
{
    int Atemp[25];
    int horauno;
    int hora2 ;
    int temp;



    for(int i=0; i<=24;i++)
    {
        cout<<"Ingrese la temperatura desde la hora "<<i<<endl;
        cin>>temp;
        Atemp[i]=temp;

    }
    cout<<"Los datos ingresados para cada hora fueron desde las 00:00 hasta las 24:00 (de hora en hora):"<<endl;
    for(int i = 0 ; i<25 ;i++)
    {
        cout<<Atemp[i]<<"  ";  
    }
    cout<<endl<<endl;
    cout<<"Qué hora necesita?"<<endl;
    cin>>horauno;

    if (horauno<0 || horauno>24)
    {
        cout<<"Solo horas correctas del dia 0 hasta las 24"<<endl;
    }
    else
    {


    cout<<"La temperatura en la hora: "<<horauno<<" es de: "<<Atemp[horauno]<<" grados centigrados"<<endl;

    }

}