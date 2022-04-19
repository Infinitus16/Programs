#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char a[100],b,c=0;
	cout<<"Enter a sentence";
	gets(a);
	while(b<strlen(a))
	{
		if(a[b]=='a')
		c++;
		b++;
	}
	cout<<"The number of spaces are "<<c;
}
