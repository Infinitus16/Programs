#include<iostream>
#include<math.h>
using namespace std;
float fact(float a)
{
	float b=1,
	i;
	for(i=1;i<=a;i++)
		b=b*i;
	return b;
}
int main()
{
	float s=0;
	for(int i=0;i<1000;i++)
	s=s+1/fact(i);
	cout<<s;
}
