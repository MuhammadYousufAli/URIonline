#include <bits/stdc++.h>
using namespace std;

int main()
{

    int num1, num2;

    while(scanf("%d%d", &num1, &num2) == 2)
    {
        float a = 0;
        cout<<"Total: R$ ";
        if(num1 == 1)
        {
            a = (num2 * 4);
            cout<<fixed<<setprecision(2)<<a<<endl;
        }
        else if(num1 == 2)
        {
             a = (num2 * 4.5);
            cout<<fixed<<setprecision(2)<<a<<endl;
        }
        else if(num1 == 3)
        {
            a = (num2 * 5);
            cout<<fixed<<setprecision(2)<<a<<endl;
        }
        else if(num1 == 4)
        {
            a = (num2 * 2);
            cout<<fixed<<setprecision(2)<<a<<endl;
        }
        else if(num1 == 5)
        {
            a = (num2 * 1.5);
            cout<<fixed<<setprecision(2)<<a<<endl;
        }


    }


    return 0;
}