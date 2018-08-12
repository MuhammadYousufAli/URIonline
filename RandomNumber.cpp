#include <iostream>
using namespace std;

int main(void)
{
    int i, n;

    cout << "Enter a positive value  : ";
    cin>>n;

    for(i = 1; i <=n ; i++)
    {
        cout<<rand()<<endl;
    }


    return 0;
}