#include<iostream>
#include<ctype.h>
#include<stdio.h>
using namespace std;
int main()
{
	int i;
	char a[80];
	gets (a);
	for(i=0;i<80;i++)
	{
		if(i==0)
		a[0]=toupper(a[0]);
		if(a[i]==' ')
		a[i+1]=toupper(a[i+1]);
	}
	puts(a);
}
