#include <bits/stdc++.h>
using namespace std;

int main()
{

    double a, b,c,A,B, R1, R2;

    while(scanf("%lf%lf%lf",&a,&b,&c) == 3)
    {

        B = pow(b,2);
        A = 4*a*c;
        c = B - A;
        if(B>A)
        {

            B = sqrt(c);
            if(a == 0)
            {
                 cout<<"Impossivel calcular"<<endl;
            }

            else
            {

                R1 = -b + B;
                a = 2*a;
                R1 = R1/a;
                cout<<"R1 = "<<fixed<<setprecision(5)<< R1<<endl;
                R2= -b - B;
                R2 = R2/a;
                cout<<"R2 = "<<fixed<<setprecision(5)<< R2<<endl;
            }

        }
        else
        {
           cout<<"Impossivel calcular"<<endl;
        }


    }




    return 0;
}
