#include<iostream>
using namespace std;
int main()
{
	int num, rem, temp, max=0;
	cout<<"Enter any number ";
	cin>>num;

	temp=num;

	while(temp>0)
	{
		rem=temp%10;
		if(rem>max)
		{
			max=rem;
		}
		temp=temp/10;
	}

	cout<<"Maximum digit is "<<max;

}
