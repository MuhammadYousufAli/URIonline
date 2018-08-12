#include <bits/stdc++.h>
using namespace std;

int fibonacci(int x)
{

    if (x == 0 || x == 1)
        return x;
    else
        return (fibonacci(x - 2) + fibonacci(x - 1));
}

int main()
{
    int n, i;

    cout << "Enter a positive value here : " << endl;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cout << fibonacci(i) << " ";
    }
    cout << endl;
    return 0;
}
