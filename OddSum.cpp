#include <iostream>
using namespace std;

int main(void)
{
	int x, count = 0;
	cout<<"Enter x Value Here : ";
	cin>>x;
	
	int i = 1;
	while(i<=x)
	{
		if(i % 2 !=0)
		{
			count++;
		}
		
		i++;
	}
	
	cout<<"Odd Value : "<<count<<" in Namber"<<endl;
	return 0;
}

