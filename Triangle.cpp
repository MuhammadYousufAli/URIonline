#include <bits/stdc++.h>
using namespace std;

int main()
{
    float a,b,c, A;

    cin>>a>>b>>c;
    if((a+b)>c && (a+c) > b && (b+c) > a)
    {
        A = a+b+c;
        cout<<"Perimetro = "<<fixed<<setprecision(1)<<A<<endl;
    }
    else
    {
        A = c*(a+b)/2;
        cout<<"Area = "<<fixed<<setprecision(1)<<A<<endl;
    }



    return 0;
}