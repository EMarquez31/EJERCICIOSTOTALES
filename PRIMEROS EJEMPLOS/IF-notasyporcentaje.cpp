#include <iostream>

using namespace std;

int main(){
    float nota, promedio=0;
    for(int i=0; i<4; i++){
        cout<<"Ingrese la nota: ";
        cin>>nota;
        if(i==0 || i==1){
            promedio = (nota*0.2)+promedio;
        }
        else if(i==2 || i==3){
            promedio = (nota*0.3)+promedio;
        }
    }
    cout<<"\nEl promedio es: "<<promedio<<endl;
    return 0;
}