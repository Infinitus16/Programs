#include<iostream>
using namespace std;
int main()
{
	int a,i,min,max;
		
	
	cout<<"Enter 5 no.\n";
	for(i=1;i<=5;i++)
	{
		cin>>a;
		if(i==1)
		{
			min=a;
			max=a;
		}
		else
		{
			if(a>max)
			max=a;			
			
			
			if(a<min)
			min=a;
		}
		
	}
	cout<<"Maximum no. is "<<max<<"\n";
	cout<<"Minimun no. is "<<min;
}
