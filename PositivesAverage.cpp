#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int i = 1, count = 0 ;
    double x, avg, sum = 0;

    while(i<=6)
    {
        cin>>x;
        if(x>0)
        {
            sum = sum + x;
            count++;
        }
        i++;
    }

    avg = sum / count;

    cout<<count<<" valores positivos\n"<<fixed<<setprecision(1)<<avg<<endl;
    return 0;
}