#include<iostream>
#include<string.h>
using namespace std;
in main()
{
	char a[100];
	int b=0,c=0;
	gets(a);
	for(;b<strlen(a);b++)
	{
		if(a[b]=='a'||a[b]=='e'||a[b]=='i'||a[b]=='o'||a[b]=='u'||a[b]=='A'||a[b]=='E'||a[b]=='I'||a[b]=='O'||a[b]=='U')
		c++;
	}
	cout<<"The number of vowels are:"<<c++;
}
