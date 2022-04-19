#include<iostream>
using namespace std;
class marksheet
{
	protected:
		float m1,m2,m3,m4,m5;
		float t,p;

	public:
		void input()
		{
				cout<<"				MARK SHEET"<<"\n";
				cout<<"Enter Marks in 5 Subjects : \n";
				cin>>m1>>m2>>m3>>m4>>m5;
		}

		void calcTotal()
		{
			t=m1+m2+m3+m4+m5;
			cout<<"\nTotal Marks : "<<t<<"\n";

		}

		void calcPercentage()
		{
			p=t/5;
			cout<<"Percentage : "<<p<<" %";
		}
};



int main()
{
	marksheet o;
	o.input();
	o.calcTotal();
	o.calcPercentage();
}
