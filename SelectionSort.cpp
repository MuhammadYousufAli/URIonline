#include <iostream>
#include <math.h>
using namespace std;
int i , j;

void  selecttionSort(int n,int ar[])
{
    
    for(i = 0;i <n - 1;i++)
    {
        int iMin = i;
        for(j = i+1;j<n;j++)
        if(ar[iMin]>ar[j])
        {
            iMin = j;
        }
       swap(ar[i], ar[iMin]);
    }

}
int main(void)
{

    int n,a;
    cout<<"Enter Array Size Here : ";
    cin>>a;
    n = fabs(a);
    int ar[n];
    for(i = 0; i < n;i++)
    {
        cout<<"Index : "<<i<<" & Item = ";
        cin>>ar[i];
    }

    selecttionSort(n,ar);

    cout<<"\nAfter Sorting Below..."<<endl;
    for(i = 0; i < n;i++)
    {
        cout<<"Index : "<<i<<" & Item = "<<ar[i]<<endl;
    }
}
