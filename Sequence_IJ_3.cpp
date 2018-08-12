#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int i, j, k = 7;
    for (i = 1; i <= 9; i += 2)
    {
        j = 0;
        while (j<3)
        {
            printf("I=%d J=%d\n", i, k);
            k--;
            j++;
           
        }
        k = k + 5;
    }

    return 0;
}