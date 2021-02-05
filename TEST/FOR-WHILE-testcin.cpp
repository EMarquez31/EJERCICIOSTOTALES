#include <iostream>
using namespace std;

int main ()
{
    int n;
    int i=0;

    cout<<"Escriba n "<<endl;
    cin>>n;

    cout<<"n = "<<n<<endl;

    for(int i=1 ;i<=n; i++)
    {
    cout<<i<<endl;
    } 

    while (i<n)
    {
        i++;
        cout<<i<<endl;
    }

    return 0;
}