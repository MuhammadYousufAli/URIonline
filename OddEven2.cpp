#include <iostream>
using namespace std;

int main()
{
    int N[101], a,t;
    for(int i = 0 ; i<101;i++)
    {
        N[i] = 0;
    }

    for(int i = 0 ; i<101; i = i + 2)
    {
        N[i] = 1;
    }

    cin>>t;
    for(int i = 1; i<=t;i++)
    {
        cin>>a;
        if(N[a] == 0)
        {
            cout<<"Odd"<<endl;
        }
        else if(N[a] == 1)
        {
            cout<<"Even"<<endl;
        }
    }




    return 0;
}
