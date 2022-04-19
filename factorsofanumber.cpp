#include<iostream>
using namespace std;
int main()
{
	int a,i,f;
	cout<<"Enter any number  ";
	cin>>a;
	cout<<"Factors are : ";
	for(i=1;i<=a;i++)
	{
		if(a%i==0)
		{
			f=i;
			if(i==a)
			cout<<f;
			
			else
			cout<<f<<",";
		    
		}
		
	}
}
