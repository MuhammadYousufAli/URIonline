#include <bits/stdc++.h>
using namespace std;
int i, j;
int main(void)
{
    int n;
    cout << "Enter Number of Elements Here : ";
    scanf("%d", &n);

    double w[n], v[n], uv[n], profit = 0, bagcap = 0;
    cout << "Enter Items then Weights Values Respectively Below : " << endl;
    for (i = 0; i < n; i++)
    {
        scanf("%lf %lf", &w[i], &v[i]);
        uv[i] = v[i] / w[i];
    }

    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (uv[i] < uv[j])
            {
                /*uv[i] = uv[i] + uv[j];
                uv[j] = uv[i] - uv[j];
                uv[i] = uv[i] - uv[j];

                w[i] = w[i] + w[j];
                w[j] = w[i] - w[j];
                w[i] = w[i] - w[j];

                v[i] = v[i] + v[j];
                v[j] = v[i] - v[j];
                v[j] = v[i] - v[j];*/

                swap(uv[i] , uv[j]);
                swap(w[i] , w[j]);
                swap(v[i] , v[j]);

            }
        }
    }

    cout << "\nAfter Sorting Below :" << endl;
    cout << "Weights\tValues\tUV^-1" << endl;
    for (i = 0; i < n; i++)
    {
        printf("%0.2lf %0.2lf %0.2lf\n", w[i], v[i], uv[i]);
    }

    cout << "\nBag Capacity Here : ";
    scanf("%lf", &bagcap);
    for (i = 0; i < n; i++)
    {
        if (bagcap >= w[i])
        {
            bagcap = bagcap - w[i];
            profit = profit + v[i];
        }
        else
        {
            profit = profit + (uv[i] * bagcap);
            bagcap = 0;
        }
    }

    printf("Optimal Solution : %0.2lf\n", profit);

    return 0;
}
