#include <iostream>

using namespace std;
int main (){

    int i=1;
    int x=1;

    int notas;
    int alumnos;

    cout<<"alumnos"<<endl;
    cin>>alumnos;

    cout<<"notas"<<endl;
    cin>>notas;

    float nota;
    float final=0;
    float promedio=0;

    while (i <= alumnos ){
		
		
		        while (x<=notas){
			
			        cout<<endl<<"ingrese la nota "<< x <<" del estudiante "<< i <<endl;
		            cin>>nota;
			
		            if (nota>=0 || nota<=5){
				
			    	    final = nota + final;
			                x = x + 1;
		            }
		            else{
			        	cout<<"no esta dentro del rango"<<endl;
			        }	
		        }
		        
		        
		        promedio = final / notas;
                cout<< "promedio del estudiante numero "<<i<<" es igual "<< promedio <<endl;
                i = i+1;
		        x = 1;
		        final = 0;
}

}