#include <iostream>
#include <math.h>

using namespace std;

int main (){

    int n;
    int nindvidual;
    int m;

    int nnota;
    float mestudiantes;

    float final = 0;
    float prom = 0;

    int paso = 0;
    int porcentaje=0;

    cout<<"\nIngrese la cantidad de estudiantes "<<endl;
    cin>>m;

    if(m<=0){
        cout<<"Solo valores mayores a 0"<<endl;
        return main();
    }
    else{

    cout<<"\nIngrese la cantidad de notas"<<endl;
    cin>>n;

    for(int i=1; i<=m ; i++){
        for(int y=1; y <= n; y++){

            cout<<"\nPara el estudiante numero "<<i<<endl;
            cout<<" Ingrese la nota numero"<<y<<endl;
            cin>>mestudiantes;

            if(mestudiantes>=0 && mestudiantes <= 5){

            final = mestudiantes + final;
            }

            else{
                cout<<"Ingrese solo valores 0>5"<<endl;
                return main();
            }
        }
        
            prom = final/n;
            cout<<"Promedio = "<<prom;
            final = 0;

            if(prom>=2.8){
                paso=1+paso;
                cout<<"\nAPROBO"<<endl;


            }
            else{
                cout<<"\nREPROBO"<<endl;
            }
    }
    }
    porcentaje=(paso*100)/m;
    
    cout<<"\nLa cantidad de alumnos ("<<m<<") que aprobaron fueron "<<porcentaje<<"%"<<endl;


    return 0;
}