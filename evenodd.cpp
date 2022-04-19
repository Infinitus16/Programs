#include<iostream>
using namespace std;
class Evenodd
{
	
	protected:
		int num;
		
	public:
		Evenodd()
		{
		num=2;
		}
	
		Evenodd(int a)
		{
		num=a;
		}
		
		
	public:
		void input()
		{  
			cout<<"Enter a number :";
			cin>>num;
		}	
		
	public:
		void checkevenodd()
		{
			if(num%2==0)
			cout<<"The number is even."<<"\n";
			else
			cout<<"The number is odd."<<"\n";
		}
		
		
		void checkevenodd(int a)
		{
			num=a;
			checkevenodd();		
		}
};

/*int main()
{
	Evenodd obj;
	obj.input();	
	obj.checkevenodd();
}*/

