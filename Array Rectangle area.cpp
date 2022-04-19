#include <iostream>
#define MAX 100
using namespace std;
class Rectangle
{
	protected:
		int l,b,a;
	public:
		void input()
		{

			cout<<"\n\nEnter length :";
			cin>>l;
			cout<<"\nEnter breadth :";
			cin>>b;
		}
		
		
		void calcArea()
		{
			a=l*b;
		}
		
		void displayArea()
		{
			cout<<"\nArea Of Rectangle :"<<a;
		}
		
		friend void compare_area(Rectangle *r, int n)
		{
			int max=0;
			for(int i=0;i<n;i++)
			{
				 if(r[i].a>max)
				 	max=r[i].a;	
			}
			cout<<"\n\nGreatest area is :"<<max;
		}
};


int main()
{	
		Rectangle obj[MAX]; 
		int n;
		
		cout<<"Enter Number Of Rectangles :";
		cin>>n;
		
		for(int i=0;i<n;i++)
		{
		obj[i].input();
	   	obj[i].calcArea();
		obj[i].displayArea();
		}
		compare_area(obj,n);
}		