#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	int k;
	float a[20];
	char b[20];
	for(int j=0;j<20;j++)
	{
	cin>>a[j];
	cin>>b[j];
	if(b[j]=='=')
	break;
	}
	if(b[1]=='+'||b[1]=='-')
	k=0;
	else
	k=1;
	for(int i=-1;i<20;i++)
	{
		if(b[i+1]=='+')
		{
			k=a[i+1]+a[i+2];
			a[i+2]=k;
		}
		if(b[i+1]=='-')
		{
			k=a[i+1]-a[i+2];
			a[i+2]=k;
		}
		if(b[i+1]=='*')
		{
			k=a[i+1]*a[i+2];
			a[i+2]=k;
		}
		if(b[i+1]=='/')
		{
			k=a[i+1]/a[i+2];
			a[i+2]=k;
		}
	}
	cout<<k;
}
