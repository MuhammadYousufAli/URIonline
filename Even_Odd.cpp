#include <bits/stdc++.h>
using namespace std;

int main()
{

    long long int num, n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> num;
        if (num % 2 == 0 && 0 < num)
        {
            cout << "EVEN POSITIVE" << endl;
        }
        else if (num % 2 != 0 && 0 < num)
        {
            cout << "ODD POSITIVE" << endl;
        }
        else if (num % 2 == 0 && 0 > num)
        {
            cout << "EVEN NEGATIVE" << endl;
        }
        else if (num % 2 != 0 && 0 > num)
        {
            cout << "ODD NEGATIVE" << endl;
        }
        else
        {
            cout << "NULL" << endl;
        }
    }

    return 0;
}