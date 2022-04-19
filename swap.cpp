#include<iostream>
using namespace std;
class Swap
{
	int a,b,c;
	public:
		Swap()
		{
			a=1;
			b=1;
		}
		Swap(int p,int q)
		{
			a=p;
			b=q;
		}
		void input()
		{
			cout<<"Enter any two numbers: ";
			cin>>a>>b;
		}
		
		void swapnumbers()
		{
			c=a;
			a=b;
			b=c;
			
			cout<<"The new swapped values are :"<<a<<","<<b;	
		}
};


int main()
{
	Swap obj;
	obj.input();
	obj.swapnumbers();
}
