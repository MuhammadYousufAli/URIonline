#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    double a,b,c;
    while(cin>>a>>b>>c)
    {
        if(a>=(b+c))
        {
            cout<<"NAO FORMA TRIANGULO"<<endl;
        }
        else if(pow(a,2) == pow(b,2) + pow(c,2))
        {
            cout<<"TRIANGULO RETANGULO"<<endl;
        }
        else if(pow(a,2) > pow(b,2) + pow(c,2))
        {
            cout<<"TRIANGULO OBTUSANGULO"<<endl;
        }
        else if(pow(a,2) < pow(b,2) + pow(c,2))
        {
            cout<<"TRIANGULO ACUTANGULO"<<endl;
        }
        else if(a == b && b == c && c == a)
        {
            cout<<"TRIANGULO EQUILATERO"<<endl;
        }
        else if((a == b && b == c && c!=a) || (a == b && b != c && c==a) || (a != b && b == c && c==a))
        {
            cout<<"RIANGULO ISOSCELES"<<endl;
        }
    }


    return 0;
}