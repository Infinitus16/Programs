#include<iostream>
using namespace std;
int main()
{
	int num,i,sum=0,f;
	cout<<"Enter a no.:";
	cin>>num;
	for(i=1;i<num;i++)
	{
		if(num%i==0)
		{
			f=i;
			sum=sum+f;
		}
	}
	if(sum==num)
	{
		cout<<"No. is perfect ";
	}
	else
	{
		cout<<"No. is not perfect";
	}

}

