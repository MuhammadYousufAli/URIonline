#include <iostream>
using namespace std;

int main()
{
    float a;


    while(1)
    {
        cin>>a;

        if(25.00<a || a >=50)
        {
            cout<<"(25,50]"<<endl;
        }
        else
        {
            cout<<"Out of Condition"<<endl;
        }
    }



    return 0;
}
