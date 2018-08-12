#include <iostream>
using namespace std;

int main()
{

    int n, count = 0;

    while (1)
    {
        cout << "Enter a positive value here : ";
        cin >> n;
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                count++;
            }
        }

        cout << "N = " << n << "\tCount = " << count << endl;
        n = 0, count = 0;
    }

    return 0;
}