#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
	char l[25];
	gets(l);
	l[0]=toupper(l[0]);
	cout<<l[0]<<".";
	for(int i=1;l[i]!='\0';i++)
	{
			if(l[i]==' ')
			{
				
			l[i+1]=toupper(l[i+1]);
			cout<<l[i+1]<<".";
			}
		
	}
	
}
		
	