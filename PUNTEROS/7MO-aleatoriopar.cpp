#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;
int main(){

    int n=0;


    srand (time(NULL));
    cout<<"ingrese su valor n"<<endl;
    cin>>n;

    int arregloA[n];
    int *parregloA = &arregloA[0];

    for(int i = 0; i < n; i++)
    {
        parregloA[i]= rand() % 10 + 1;;
    }
    
        for(int i = 0; i < n; i++)
    {
        cout<<parregloA[i]<<endl;
    }
    
		for (int i = 0; i<n; i++){

		    if (parregloA[i]%2 == 0){
			
		
			
            cout<<parregloA[i]<<" es numero par"<<endl; 
			
		    
		    }
        }
	
}