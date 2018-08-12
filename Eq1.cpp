#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    double x,y,x_plus_y,x_minus_y;
    cout<<"Enter X_Plus_Y : ";
    scanf("%lf", &x_plus_y);

    cout<<"Enter X_Minus_Y : ";
    scanf("%lf", &x_minus_y);

    x = (x_plus_y + x_minus_y)/2;
    y = (x_plus_y - x_minus_y)/2;

    cout<<"\nResult Below : "<<endl;
    printf("X = %0.2lf\nY = %0.2lf\n", x, y);



    return 0;
}