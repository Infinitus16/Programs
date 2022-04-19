#include<iostream>
#include<string.h>
using namespace std;
int man()
{
	char a[100];
	int i=0,b=0;
	gets(a);
	for(;i<strlen(a);i++)
	{
		if(a[i]==' ')
		b++;
	}
	cout<<"The number of words in the sentence is:"<<b+1;
}
