#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num, count = 0,root;
    cout<<"Enter any postive integer here : ";
    cin>>num;

    if(num<=0)
    {
        cout<<"Please, Enter Positive number...!"<<endl;
    }
    else if(num == 1)
    {
        cout<<"Unit Number"<<endl;
    }
    else
    {
        root = sqrt(num);
        for(int i = 2; i<root;i++)
        {
            if(root % i == 0)
            {
                count++;
                break;
            }
        }
        if(count == 0)
        {
            cout<<"Prime Number"<<endl;
        }
        else
        {
            cout<<"Not Prime Number"<<endl;
        }
    }


    return 0;
}