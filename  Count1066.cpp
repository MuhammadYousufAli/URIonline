#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int n,i, countPos = 0, countNeg = 0, countOdd = 0, countEven = 0;
    scanf("%d",&n);
    int num[5];
    for(i = 0; i<n;i++)
    {
        scanf("%d",&num[i]);
        if(num[i] % 2 == 0 && num[i]>0)
        {
            cout<<"Positive & Even"<<endl;
        }
        else if(num[i] % 2!=0 && num[i]>0)
        {
            cout<<"Odd & Positive"<<endl;
        }
        else if(num[i] % 2==0 && num[i]<0)
        {
            cout<<"Even & Negative"<<endl;
        }
        else if(num[i] % 2 != 0 && num[i]<0)
        {
            cout<<"Odd & Negative"<<endl;
        }

    }


    return 0;
}
