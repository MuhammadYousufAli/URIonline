#include <iostream>
using namespace std;

int i;
int linearSearch(int A[], int n, int x)
{
    for(i = 0; i<n;i++)
    {
        if(A[i] == x)
        {
            return i;
        }
    }

    i = -1;
    return i;
}

int main()
{
    int n;
    cout<<"Enter array size here : ";
    cin>>n;

    int A[n];

    cout<<endl;
    for( i = 0 ; i <n;i++)
    {
        cout<<"Index : "<<i<<" & Item = ";
        cin>>A[i];
    }

    int x;
    cout<<"\nEnter a new item here : ";
    cin>>x;

    if(linearSearch(A, n, x) == -1)
    {
        cout<<"Not Found"<<endl;
    }
    else
    {
        cout<<"Found and Index : "<<i<<endl;
    }



    return 0;
}