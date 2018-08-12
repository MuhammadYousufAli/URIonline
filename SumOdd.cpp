#include <iostream>
#include <math.h>
using namespace std;

int main(void)
{
    int x, y, count1 = 0, count2 = 0, sum = 0;
    int X, Y;
    int i;
    while (cin >> x >> y)
    {
        X = fabs(x);
        Y = fabs(y);
        for (i = 1; i <= X; i++)
        {
            if (i % 2 != 0)
            {
                count1++;
            }
        }
        
        for (i = 1; i <= Y; i++)
        {
            if (i % 2 == 1)
            {
                count2++;
            }
        }
        
        sum = count1 + count2;
        cout << "Sum = " << sum << endl;
        count1 = 0, count2 = 0, sum = 0;
    }

    return 0;
}