#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, d;

    while(scanf("%d%d%d%d", &a, &b, &c, &d) == 4)
    {
        if((b>c) && (d>a) && (c+d > a+b) && c>=0  && d >= 0 && a % 2 ==0)
        {
            cout<<"Valores aceitos"<<endl;
        }
        else
        {
            cout<<"Valores nao aceitos"<<endl;
        }

    }





    return 0;
}
