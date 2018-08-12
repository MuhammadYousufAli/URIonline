#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int h1, m1, h2, m2, d;

    while (scanf("%d %d %d %d", &h1, &m1, &h2, &m2))
    {
        d = (h2 * 60 + m2) - (h1 * 60 + m1);
        if (d <= 0)
            d += (60 * 24);
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", d / 60, d % 60);
    }

    return 0;
}