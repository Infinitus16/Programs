#include <iostream>
using namespace std;
class Rectangle
{
	protected:
		int l,b,a;
	
	public:
		void input()
		{
			int i=1;
			cout<<"Enter Length and breadth of rectangle :";
			cin>>l>>b;
		}		
		
		
	    void calcArea()
		{
			a=l*b;
			cout<<"Area = "<<a<<"\n";
		}
		
		friend void compareArea(Rectangle *R,int n)
		{
			int max,q;
			for(int i=0;i<n;i++)
			{
				if(R[i+1].a>R[i].a)
					max=R[i+1].a;
					q=i+1;
			}
			cout<<"Greatest Area is of Rectangle"<<q<<"\nIts value is "<<max<<"\n\n";
			
		}
};


int main()
{
	Rectangle recs[100];
	int n;
	cout<<"Enter number of Rectangles :";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		recs[i].input();
		recs[i].calcArea();
	}
	
	compareArea(recs,n);	
}