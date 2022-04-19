#include<iostream>
#include<math.h>
using namespace std;
float fact(float a)
{
	float b=1,i;
	for(i=1;i<=a;i++)
		b=b*i;
	return b;
};
int main()
{
	float x,s=0;
	int b=0;
	cin>>x;
	for(int i=1;i<100;i=i+2)
	{
		if(b%2==0)
		s=s+pow(x,i)/fact(i);
		else
		s=s-pow(x,i)/fact(i);
		b++;
	}
	cout<<s;
}
