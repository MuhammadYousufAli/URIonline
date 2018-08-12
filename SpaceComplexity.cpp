#include <iostream>
using namespace std;

int main()
{
    int arr[101], i , n;

    for(i = 0; i<101;i++)
    {
        arr[i] = 0;
    }

    for(i = 0; i<101;i = i + 2)
    {
        arr[i] = 1;
    }


    cout<<"Enter a value here : ";
    cin>>n;

    if(arr[n])
    {
        cout<<n<<" is an Even Number."<<endl;
    }
    else
    {
        cout<<n<<" is an Odd Numnber."<<endl;
    }

    return 0;
}