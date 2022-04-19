#include<iostream>
using namespace std;
int main()
{
	cout<<"Enter a number";
	int a,i,b;
	cin>>a;
	for(i=2;i<=a/2;i++)
	if(a%i==0)
	{
		b=0;
		break;
	}
	if(b==0)
	cout<<"The number isn't prime";
	else cout<<"The number is prime";
}
