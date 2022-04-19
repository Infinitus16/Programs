#include<iostream>
using namespace std;
int main()
{
	int a,i,sum=0,f;
	cout<<"Enter a number ";
	cin>>a;
	for(i=1;i<=a/2;i++)
	{
		if(a%i==0)
		{
			f=i;
		    sum=sum+f;
		    
		}
    } 
	    if(sum==a)
	    cout<<"It is a perfect no.";
	    
	    else
	    cout<<"It is not a perfect no.";
	
	
}
