#include<iostream>
using namespace std;
int main()
{
	cout<<"Enter how many numbers you want to compare";
	int a,b,c=0,d;
	cin>>a;
	for(;c<a;c++)
	{
		cout<<"Enter the "<<c+1<<" number";
		cin>>b;
		if(c==0)
		d=b;
		if(c!=0&&d<b)
		d=b;
	}
	cout<<d<<" is the greatest number of all.";
}
