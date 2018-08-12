#include <iostream>
using namespace std;

int main(void)
{
    long long n, f = 1,i = 2;
    cin>>n;
    while(i<=n)
    {
        f = f * i;
        i++;

    }

    cout<<f<<endl;

    f = 1;
}