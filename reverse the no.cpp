#include <iostream>
using namespace std;
int main()
{
	int num,rem,temp;
	cout<<"Enter a number : ";
	cin>>num;
	cout<<"The reversed number is : ";
	temp=num;
	while(temp>0)
	{
		rem=temp%10;
		temp=temp/10;
		cout<<rem;
		
	}
	

}
