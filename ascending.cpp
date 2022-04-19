#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	int len,d,e;
	cout<<"How many numbers you want to arrange?\n";
	cin>>len;
	int b[len],c[len];
	for(int a=0;a<len;a++)
	{
		cout<<"Enter "<<a+1<<" number.\n";
		cin>>b[a];
	}
	for(int i=0;i<len;i++)
	{
		for(int a=0;a<len;a++)
		{
			if(a==0)
			d=b[a];
			if(b[a]<d)
			{
				d=b[a];
				e=a;
			}
		}
		c[i]=d;
		for(int a=0;a<len;a++)
			{
				if(a>e)
				b[a]=b[a-1];
			}	
	}
	for(int i=0;i<len;i++)
	cout<<c[i];
}
