#include <iostream>
using namespace std;

int main(void)
{
    int i = 1, n, x, count1 = 0,  count2 = 0;

    cin >> n;
    while (i <= n)
    {
        
        cin>>x;
        if(10<=x && 20>=x)
        {
            count1++;
        }
        else
        {
            count2++;
        }
        i++;
    }
    cout<<count1<<" in"<<endl;
    cout<<count2<<" out"<<endl;


    return 0;
}