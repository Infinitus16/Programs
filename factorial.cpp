#include <iostream>
using namespace std;
int main()
{
	int f=1,n;
	
	cout<<"Enter any number: ";
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		f=f*i;
	}
	cout<<"Factorial is: "<<f;
}