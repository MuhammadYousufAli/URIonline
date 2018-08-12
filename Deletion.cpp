#include <iostream>
using namespace std;
int i = 0;
void deletion(int A[], int n)
{
    int pos;
    cout << "\nEnter Position Here for Delete Item : ";
    cin >> pos;
    if (pos <= n && pos >= 0)
    {
        for (i = pos; i < n; i++)
        {
            A[i] = A[i + 1];
        }

        cout << "\nFinallay Out Put Below : " << endl;
        for (i = 0; i < n - 1; i++)
        {
            cout << "Index : " << i << " & Item = " << A[i] << endl;
        }
    }
    else
    {
        cout<<"Not Possible...!"<<endl;
    }
}

int main()
{

    int n;
    cout << "Enter nTh Value Here : ";
    cin >> n;
    if (n >= 0)
    {
        int A[n];
        for (i = 0; i < n; i++)
        {
            cout << "Index : " << i << " & Item = ";
            cin >> A[i];
        }
        deletion(A, n);
    }
    else
    {
        cout << "Array Size Always Positive Value....!" << endl;
    }

    return 0;
}