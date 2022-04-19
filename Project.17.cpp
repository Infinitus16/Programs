#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char a[20];
	int b;
	gets(a);
	for(int i=0;i<strlen(a)/2;i++)
	if(a[i]!=a[strlen(a)-i-1])
	b=0;
	if(b==0)
	cout<<"The string isn't palindrome";
	else cout<<"The string is palindrome";
}
