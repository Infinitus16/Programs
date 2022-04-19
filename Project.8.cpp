#include<iostream>
using namespace std;
int main()
{
	cout<<"Enter the number whose factors you want";
	int a,b=1;
	cin>>a;
	for(b=1;b<=a/2;b++)
	{n
		if(a%b==0)
		cout<<b<<", ";
	}
}
