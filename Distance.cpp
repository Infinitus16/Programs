#include<iostream>
#include<conio.h>
#include<stdio.h> 
using namespace std;
class dist
{
	public:
		int feet,inches;
		void read()
		{
			cin>>feet>>inches;
		}
		friend void sum(dist d1, dist d2)
		{
			int a=d1.inches+d2.inches;
			int b=d1.feet+d2.feet;
			if(a>=12)
			{
				a=a-12;
				b++;
			}
			cout<<b<<" feet "<<a<<" inches.";
		}
		
};
int main()
{
	dist d1,d2;
	d1.read();
	d2.read();
	sum(d1,d2);
}
