#include<iostream>
using namespace std;
int main()
{
	int num, rem, temp, sum=0;
	cout<<"Enter any number ";
	cin>>num;

	temp=num;

	while(temp>0)
	{
		rem=temp%10;
		sum=sum+rem;
		temp=temp/10;
	}

	cout<<"Sum of digits is "<<sum;
}
