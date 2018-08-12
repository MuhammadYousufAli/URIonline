#include <bits/stdc++.h>
using namespace std;

int main()
{
    float x, y;
    while(scanf("%f%f", &x,&y) == 2)
    {
        if(x == 0 && y == 0)
        {
            cout<<"Origem"<<endl;
        }
        else if(x !=0 && y ==0)
        {
            cout<<"Eixo X"<<endl;
        }
        else if(x ==0 && y !=0)
        {
            cout<<"Eixo Y"<<endl;
        }

        else if(x>0 && y>0)
        {
            cout<<"Q1"<<endl;
        }
        else if(x<0 && y>0)
        {
            cout<<"Q2"<<endl;
        }
        else if(x<0 && y<0)
        {
            cout<<"Q3"<<endl;
        }
        else
        {
            cout<<"Q4"<<endl;
        }

    }




    return 0;
}
