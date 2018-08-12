#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int num, sq;
    int i = 2;
    cin>>num;
    while(i<=num)
    {
        sq = pow(i,2);
        cout<<i<<"^2 = "<<sq<<endl;
        i = i + 2;
    }



    return 0;
}