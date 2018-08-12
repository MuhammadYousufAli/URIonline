#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int num[100];
    int i, big, pos = 0;
    for(i =0 ;i<100;i++)
    {
        scanf("%d", &num[i]);
    }
    big = num[0];
    for(i = 1 ; i<100 ;i++)
    {
        if(big < num[i])
        {
            big = num[i];
            pos = i;
        }
    }
    ++pos;
    printf("%d\n%d\n", big, pos);
    return 0;
}