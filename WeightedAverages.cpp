#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    double n1,n2,n3, avg = 0, rem = 0;
    int n, i = 1, p = 0;
    scanf("%d", &n);
    while(i<=n)
    {
        scanf("%lf%lf%lf", &n1, &n2, &n3);
        avg = (n1 + n2 + n3)/3;
        p = avg;
        rem = avg - p;
        avg = avg + rem;
        printf("%lf\n", avg);
        i++;
    }



    return 0;
}