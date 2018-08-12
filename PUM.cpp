#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int n,i;
    scanf("%d", &n);
    for(i = 1; i <= (n * 4); i++)
    {
        if(i % 4 !=0)
        {
            printf("%d ",i);
        }
        else
        {
            cout<<"PUM"<<endl;
        }
    }


    return 0;
}