#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    long long int n1, n2, f1 = 1, f2 = f1;
    while (scanf("%lld %lld", &n1, &n2) != EOF)
    {
        long long int i;
        i = 2;
        while (i <= n1)
        {
            f1 = f1 * i;
            i++;
        }
        i = 2;
        while (i <= n2)
        {
            f2 = f2 * i;
            i++;
        }
        long long int sum = 0;
        sum = f1 + f2;

        printf("%lld\n", sum);
        f1 = f2 = 1;
        sum = 0;
    }

    return 0;
}