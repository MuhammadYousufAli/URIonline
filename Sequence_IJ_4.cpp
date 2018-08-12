#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    float i, j;

    for (i = 0; i <= 2.1; i = i + 0.2)
    {

        for (j = 1.0; j <= 3.0; j++)
        {
            if (i > 0 && i < 1 || i > 1 && i < 2)
            {
                printf("I=%0.1f J=%0.1f\n", i, (i + j));
            }
            else
            {
                printf("I=%d J=%d\n", (int)i, (int)(i + j));
            }
        }
    }

    return 0;
}