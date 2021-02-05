#include <iostream>
using namespace std;

int main()
{

int arreglo[5][4], k=1,s=0,c=1, i=0, N, l=0;

    for(int i=0;i<5;i++)
    {

        for (int j=0;j<4;j++)
        {

        if (i==0 && j==0)
        {
            arreglo[i][j]=0;
        } 

        arreglo[i][j+1]=k;
        k=s+c;
        s=c;
        c=k;


        }
    }

    for(int i=0;i<5;i++)
    {

        for (int j=0;j<4;j++)
        {

        cout<<arreglo[i][j]<<" ";

        }cout<<endl;
    }

}