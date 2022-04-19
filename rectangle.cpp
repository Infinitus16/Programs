#include<iostream>
#include<math.h>
using namespace std;
class Rectangle
{
	float l,b;
	float area,per,d;
public:	

         void input()
        {
        	cout<<"Enter length and breadth :";
        	cin>>l>>b;
        	
		}
		void calcarea()
		{
			area=l*b;
			cout<<"The area is :"<<area<<"\n";
		
		}
		void calcperimeter()
		{
			per=2*(l+b);
			cout<<"Perimeter is :"<<per<<"\n";
	    }
		void calcdiagonal()
		
		{
			d = sqrt(l*l + b*b);
			cout<<"Diagonal is :"<<d <<"\n";
		} 
};


int main()
{
	Rectangle obj;
	obj.input();
	obj.calcdiagonal();
	obj.calcperimeter();
	obj.calcarea();
}