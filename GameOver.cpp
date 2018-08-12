#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int a, b;
    while (scanf("%d%d", &a, &b) == 2)
    {
        if (a == b)
        {
            cout << "O JOGO DUROU 24 HORA(S)" << endl;
        }
        else if (a > b)
        {
            printf("O JOGO DUROU %d HORA(S)\n", (b  - a) +24);
        }
        else
        {
            printf("O JOGO DUROU %d HORA(S)\n", (b - a ));
        }
    }

    return 0;
}