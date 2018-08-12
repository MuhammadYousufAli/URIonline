#include <iostream>
using namespace std;

int main(void)
{

    int i = 1,count = 0;
    double x;
    while(i<=6)
    {
        cin>>x;
        if(x>0)
        {
            count++;
        }
        
        i++;
    }

    cout<<count<<" valores positivos"<<endl;
    return 0;
}