#include<iostream>
#include<math.h>
using namespace std;
void main()
{
	int num,i;
	cout<<"Enter any number ";
	cin>>num;

	for(i=2;i<=num-1;i++)
	{
	       if(num%i==0)
	       {
			cout<<"Number is not prime";
			break;
	       }
	}

	if(i==num)
	{
		cout<<"Number is prime";
	}
}
