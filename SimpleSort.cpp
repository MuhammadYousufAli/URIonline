#include <iostream>
using namespace std;

int main()
{
    int A[3], B[3];
    
    for(int i = 0; i<3;i++)
    {
        cin>>A[i];
        B[i] = A[i];
    }

    for(int i = 0; i<3-1 ;i++)
    {
        for(int j = i + 1; j<3;j++)
        {
            if(B[i]>A[j])
            {
                B[i] = B[i] ^ B[j];
                B[j] = B[i] ^ B[j];
                B[i] = B[i] ^ B[j];
            }
        }
    }
    for(int  i = 0 ; i<3 ;i++)
    {
        cout<<B[i]<<endl;
    }
    cout<<endl;
    for(int i = 0 ; i<3;i++)
    {
        cout<<A[i]<<endl;
    }


    return 0;
}