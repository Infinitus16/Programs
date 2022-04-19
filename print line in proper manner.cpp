#include <iostream>
#include<stdio.h>
#include <ctype.h>
using namespace std;
int main()
{
	char l[80];
	gets(l);
	l[0]=toupper(l[0]);
	for(int i=0;l[i]!='\0';i++)
	{
		if(l[i]==' ')
			l[i+1]=toupper(l[i+1]);
		
	}
	puts(l);
}