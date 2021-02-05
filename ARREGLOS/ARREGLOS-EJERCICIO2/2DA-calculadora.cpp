#include <iostream>
using namespace std;


int main (){
	
	
	int f,c,n,m;
	int O =0;
	
	cout<< " Bienvenido a la calculadora de matrices"<<endl;
	cout<< " 1. suma "<<endl;
	cout<< " 2. resta "<<endl;
	cout<< " 3. multiplicacion "<<endl;
	cout<< " 4. traspuesta "<<endl;
	cout<< " Digite su opcion a continuacion "<<endl;
	cin>> O;
	
	
	
	switch (O){
		
		case 1:
			cout<<" Ingrese la cantidad de filas"<<endl;
			cin>> f;
			cout<<endl<<" Ingrese la cantidad de columnas"<<endl;
			cin>> c;
				if ( f < 0 || c < 0){
					cout<< " No es valor correcto"<<endl<<endl;
					return main();
				}
				else{
				
					int matriz1 [f][c];
					int matriz2 [f][c];
			
					cout<<endl<<" Llenado de matriz 1: "<<endl;
					for ( int i = 0; i < f; i++){
						for(int j =0; j < c; j++){
							cout<< " Ingrese numero: ";
							cin>>matriz1 [i][j];
						}
					}
			
			
					cout<<endl<< " Llenado de matriz 2: "<<endl;
					for ( int i = 0; i < f; i++){
						for(int j =0; j < c; j++){
							cout<< " Ingrese numero: ";
							cin>>matriz2 [i][j];
						}
					}
			
					cout<<endl<< " la matriz 1 es: "<<endl;
					for(int i = 0; i < f; i++){
						for ( int j = 0; j< c; j++){
							cout<<" "<< matriz1 [i][j];
						}cout<<endl;
					}
		
					cout<<endl<< " la matriz 2 es: "<<endl;
					for(int i = 0; i < f; i++){
						for ( int j = 0; j< c; j++){
							cout<< " "<<matriz2 [i][j];
						}cout<<endl;
					}
					
					cout<<endl<<" la suma de las matrices es: "<<endl<<endl;
					for(int i= 0; i < f;i++){
						for (int j = 0; j < c; j++){
							cout<<" "<< matriz1 [i][j]+ matriz2[i][j]<<" ";
					
						}cout<<endl;
					}
				}
		
		break;
		
		case 2:
			cout<<" Ingrese la cantidad de filas"<<endl;
			cin>> f;
			cout<<endl<<" Ingrese la cantidad de columnas"<<endl;
			cin>> c;
				if ( f < 0 || c < 0){
					cout<< " No es valor correcto"<<endl<<endl;
					return main();
				}
				else{
				
					int matriz1 [f][c];
					int matriz2 [f][c];
			
					cout<<endl<<" Llenado de matriz 1: "<<endl;
					for ( int i = 0; i < f; i++){
						for(int j =0; j < c; j++){
							cout<< " Ingrese numero: ";
							cin>>matriz1 [i][j];
						}
					}
			
			
					cout<<endl<< " Llenado de matriz 2: "<<endl;
					for ( int i = 0; i < f; i++){
						for(int j =0; j < c; j++){
							cout<< " Ingrese numero: ";
							cin>>matriz2 [i][j];
						}
					}
			
					cout<<endl<< " la matriz 1 es: "<<endl;
					for(int i = 0; i < f; i++){
						for ( int j = 0; j< c; j++){
							cout<<" "<< matriz1 [i][j];
						}cout<<endl;
					}
		
					cout<<endl<< " la matriz 2 es: "<<endl;
					for(int i = 0; i < f; i++){
						for ( int j = 0; j< c; j++){
							cout<< " "<<matriz2 [i][j];
						}cout<<endl;
					}
					
					cout<<endl<<" la resta de las matrices es: "<<endl<<endl;
					for(int i= 0; i < f;i++){
						for (int j = 0; j < c; j++){
							cout<<" "<< matriz1 [i][j]- matriz2[i][j]<<" ";
					
						}cout<<endl;
					}
				}
	
		break;
		
		case 3:
			int O1 = 0;
			cout<< " 1. multiplicacion"<<endl;
			cout<< " 2. multiplicacion por escalar"<<endl;
			cin>> O1;
			
			switch (O1){
				
				case 1:
					cout<<endl<<" ingrese los datos de la primera matriz "<<endl;
					cout<<" filas ";
					cin>> f;
					cout<<" columnas ";
					cin>> c;
					
					cout<<endl<<"ingrese los datos de la segunda matriz "<<endl;
					cout<<" filas ";
					cin>> n;
					cout<<" columnas ";
					cin>> m;
					
					
					if ( f < 0 || c < 0||n <0 ||m < 0){
					
						cout<< " No es valor correcto"<<endl<<endl;
						return main();
					}
					else{
				
						int matriz1 [f][c];
						int matriz2 [n][m];
			
						cout<<endl<<" Llenado de matriz 1: "<<endl;
						for ( int i = 0; i < f; i++){
							for(int j =0; j < c; j++){
								cout<< " Ingrese numero: ";
								cin>>matriz1 [i][j];
							}
						}
			
			
						cout<<endl<< " Llenado de matriz 2: "<<endl;
						for ( int i = 0; i < n; i++){
							for(int j =0; j < m; j++){
								cout<< " Ingrese numero: ";
								cin>>matriz2 [i][j];
							}
						}
			
						cout<<endl<< " la matriz 1 es: "<<endl;
						for(int i = 0; i < f; i++){
							for ( int j = 0; j< c; j++){
								cout<<" "<< matriz1 [i][j];
							}cout<<endl;
						}
		
						cout<<endl<< " la matriz 2 es: "<<endl;
						for(int i = 0; i < n; i++){
							for ( int j = 0; j< m; j++){
								cout<< " "<<matriz2 [i][j];
							}cout<<endl;
						}
					
						cout<<endl<<" la resta de las matrices es: "<<endl<<endl;
						for(int i= 0; i < f;i++){
							for (int j = 0; j < c; j++){
							cout<<" "<< matriz1 [i][j]- matriz2[i][j]<<" ";
					
						}cout<<endl;
					}
				}
					
				break;
				
				case 2:
					
					int e = 0;
					cout<<" Ingrese la cantidad de filas"<<endl;
					cin>> f;
					cout<<endl<<" Ingrese la cantidad de columnas"<<endl;
					cin>> c;
					cout<<endl<<" ingrese el escalar "<<endl;
					cin>> e;
					
					if ( f < 0 || c < 0){
						cout<< " No es valor correcto"<<endl<<endl;
						return main();
					}
					else{
				
						int matriz1 [f][c];
					
			
						cout<<endl<<" Llenado de matriz: "<<endl;
						for ( int i = 0; i < f; i++){
							for(int j =0; j < c; j++){
								cout<< " Ingrese numero: ";
								cin>>matriz1 [i][j];
							}
						}
			
			
						cout<<endl<< " la matriz es: "<<endl;
						for(int i = 0; i < f; i++){
							for ( int j = 0; j< c; j++){
								cout<<" "<< matriz1 [i][j]<<" ";
							}cout<<endl;
						}
						
						cout<<endl<<" El resultado es: "<<endl;
						for( int i = 0; i < f; i++ ){
        					for( int j = 0; j < c; j++ ){
            					cout<<" "<<matriz1[i][j]* e<<" ";
							}cout<<endl;
						}
					}
				break;
			}
			
		break;	
			
	}
		
	switch (O){
		
		
		case 4:
			cout<<" Ingrese la cantidad de filas"<<endl;
			cin>> f;
			cout<<endl<<" Ingrese la cantidad de columnas"<<endl;
			cin>> c;
			
			
			if ( f < 0 || c < 0){
				cout<< " No es valor correcto"<<endl<<endl;
				return main();
			}
			else{
				
				int matriz1 [f][c];
					
			
				cout<<endl<<" Llenado de matriz: "<<endl;
				for ( int i = 0; i < f; i++){
					for(int j =0; j < c; j++){
						cout<< " Ingrese numero: ";
						cin>>matriz1 [i][j];
						}
					}
			
			
				cout<<endl<< " la matriz es: "<<endl;
				for(int i = 0; i < f; i++){
					for ( int j = 0; j< c; j++){
						cout<<" "<< matriz1 [i][j]<<" ";
					}cout<<endl;
				}
				
				cout<<endl<<" su transpuesta es: "<<endl;
				for(int i = 0; i < f; i++){
					for ( int j = 0; j< c; j++){
						cout<<" "<< matriz1 [j][i]<<" ";
					}cout<<endl;
				}
			}
		break;
	}	
		
		
	return (0);	
		
	}