#include <bits/stdc++.h>
using namespace std;

int main()
{
    float a;

    while(scanf("%f",&a) == 1)
    {

        if(0 > a ||  a > 100)
        {
            cout<<"Fora de intervalo"<<endl;
        }
        else if(25 < a && a <=50)
        {
            cout<<"Intervalo (25,50]"<<endl;
        }
        else if(0<= a && a <=25)
        {
            cout<<"Intervalo [0,25]"<<endl;
        }
        else if(75 < a && a<=100)
        {
            cout<<"Intervalo (75,100]"<<endl;
        }



    }




    return 0;
}
