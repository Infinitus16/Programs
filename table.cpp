#include<iostream>
using namespace std;
int main()
{
	int num, res, i;
	cout<<"Enter any number ";
	cin>>num;

	i=1;
	while(i<=10)
	{
		res=num*i;
		cout<<num<<" X "<<i<<" = "<<res<<"\n";
		i++;
	}

}
