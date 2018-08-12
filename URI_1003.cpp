#include <bits/stdc++.h>
using namespace std;

int main()
{
    int  a, b, c ,d, prod;

    while(scanf("%d%d%d%d", &a,&b, &c, &d) == 4)
    {
        prod = (a*b) - (c*d);
        cout<<"DIFERENCA = "<<prod<<endl;
    }

    return 0;
}
