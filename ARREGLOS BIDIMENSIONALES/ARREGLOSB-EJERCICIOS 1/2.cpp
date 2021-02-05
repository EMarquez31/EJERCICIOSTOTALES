# include <iostream>

using namespace std;

int main (){
    int n= 4;
    int matriz [n][n];

    for (int i = 0; i < n; i++){
         for (int j = 0; j < n; j++){
             if ( i == j){
                 matriz [i][j] = 1;
             }
             else{
                 matriz [i][j] = 0;
             }
         }
         
    }
    
    cout<< "Matriz identidad"<<endl;

    for (int i = 0; i < 4; i++){
         for (int j = 0; j < 4; j++){
            cout<<matriz [i][j]<<" ";
         }cout<<endl;
         
    }



}

