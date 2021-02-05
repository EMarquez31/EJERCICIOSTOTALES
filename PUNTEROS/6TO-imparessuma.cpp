//-Llenar un arreglo con los números impares del 0 a N y mostrar a cuanto equivale la suma de todos los valores.

#include <iostream>
using namespace std;
int main(){
 
    int n;
    cout<<"ingrese el tamaño del arreglo"<<endl;
    cin>>n;
	int arreglo1 [n];
    int *parreglo1 = &arreglo1[0];
	int suma = 0;
	
	for ( int i = 0; i < n ; i++){
		
		parreglo1 [i] = ((2 * i)+1);
		
		suma = parreglo1[i]+suma;
	}

    cout<<"Estos son sus numeros "<<endl;
	for ( int i = 0; i < n ; i++){
		
		cout<<parreglo1 [i]<<endl;
    }

    cout<<"Esta es la suma de los impares "<<suma<<endl;
}