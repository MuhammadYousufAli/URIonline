#include <iostream>
using namespace std;
int i, j;

void sorting(int A[], int n)
{
    int pos = 0;
    for(i = 0; i<=n - 1;i++)
    {
        for(j = i + 1; j<=n;j++)
        {
            if(A[i]>A[j])
            {
                pos = j;
                A[i] =  A[i] ^  A[pos];
                A[pos] =  A[i] ^  A[pos];
                A[i] =  A[i] ^  A[pos];

            }
        }
    }
}
void insertion(int A[], int n)
{
    int pos, x;
    cout << "\nEnter the Index No. for Inserting Here : ";
    cin >> pos;
    if (pos >= 0 && pos < n)
    {
        for (i = n - 1; i >= pos; i--)
        {
            A[i + 1] = A[i];
           
        }

        cout << "Enter an Item Here : ";
        cin >> x;
        A[pos] = x;

        cout << "After Inserting an Item...: " << endl;
        for (i = 0; i <= n; i++)
        {
            cout << "Index : " << i << " & Item  = " << A[i] << endl;
        }
        
        sorting(A,n);
        cout<<"\n\nAfter Sorting :"<<endl;
        for(i = 0;i<=n;i++)
        {
            cout<<A[i]<<"  ";
        }
        cout<<"\n"<<endl;
    }
    else
    {
        cout << "Impossible...!" << endl;
    }
}

int main()
{

    int n, A[101];
    cout << "Enter nTh value (max 100) here :";
    cin >> n;
    A[n];
    cout << "\nLoad Item Below : " << endl;
    for (i = 0; i < n; i++)
    {
        cout << "Index : " << i << " & Item = ";
        cin >> A[i];
    }
    insertion(A, n);

    return 0;
}