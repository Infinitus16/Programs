#include <iostream>
using namespace std;
class DOB
{
	protected:
		int d,m,y;
		
	public:
		void input()
		{
			cout<<"Enter date , month and year:\n";
			cin>>d>>m>>y;
		}	
		
		friend void calcage(DOB d1,DOB d2, DOB d3)
		{
			if(d2.d<d1.d)
			{
				d2.d=d2.d+30;
				d2.m=d2.m-1;
			}
			
			d3.d=d2.d-d1.d;
			
			if(d2.m<d1.m)
			{
				d2.m=d2.m+12;
				d2.y=d2.y-1;
			}
			
			d3.m=d2.m-d1.m;
			d3.y=d2.y-d1.y;
			
			cout<<"AGE: "<<d3.y<<" years ,"<<d3.m<<" months ,"<<d3.d<<" days";
			
			if(d3.y<18)
				cout<<"\nYOU ARE NOT ELIGIBLE FOR VOTING!!";
			else
				cout<<"\nYOU ARE ELIGIBLE FOR VOTING!!";
			
		}
		
		
		
		
	
};


int main()
{
	DOB d1,d2,d3;
	cout<<"DATE OF BIRTH\n";
	d1.input();
	cout<<"CURRENT DATE\n";
	d2.input();
	calcage(d1,d2,d3);
}

