#include<iostream>
using namespace std;
int main()
{
	cout<<"How many numbers you want to take average of-";
	int a,b=0,c;
	cin>>a;
	for(int i=0;i<a;i++)
	{
		cout<<i+1<<" number:";
		cin>>b;
		c+=b;
	}
	cout<<"Average: "<<c/a;
}
