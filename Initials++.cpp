#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	int i,j,k;
	char a[30];
	gets(a);
	for(i=0;i<30;i++)
	{
		if(a[i]==' ')
		j=i;
	}
	for(k=0;k<30;k++)
	{
		if(k==0)
		cout<<a[0];
		if(a[k]==' ')
		cout<<a[k+1];
	}
	while(j<30)
	{
		cout<<a[j+2];
		j++;
	}
}
