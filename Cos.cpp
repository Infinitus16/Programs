#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	float x,s=0;
	int b=0;
	cin>>x;
	for(int i=0;i<100;i=i+2)
	{
		if(b%2==0)
		s=s+pow(x,i)/fact(i);
		else
		s=s-pow(x,i)/fact(i);
		b++;
	}
	cout<<s;
}
