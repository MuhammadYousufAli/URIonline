#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num, sal;
    float hors;
    cin>>num>>sal>>hors;

    cout<<"NUMBER = "<<num<<endl;
    cout<<"SALARY = U$ "<<fixed<<setprecision(2)<<sal*hors<<endl;

    return 0;
}
