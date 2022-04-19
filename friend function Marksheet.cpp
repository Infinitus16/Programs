#include<iostream>
using namespace std;
class student
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
		
		friend void topper(student s1,student s2,student s3,student s4,student s5)
		{
		     float max=0;
			if(s1.t>max)
				max=s1.t;
			if(s2.t>max)
				max=s2.t;
			if(s3.t>max)
				max=s3.t;
			if(s4.t>max)
				max=s4.t;
			if(s5.t>max)
				max=s5.t;
		}
};



int main()
{
	student s1,s2,s3,s4,s5;
	s1.input();
	s1.calcTotal();
	s1.calcPercentage();
	s2.input();
	s2.calcTotal();
	s2.calcPercentage();
	s3.input();
	s3.calcTotal();
	s3.calcPercentage();
	s4.input();
	s4.calcTotal();
	s4.calcPercentage();
	s5.input();
	s5.calcTotal();
	s5.calcPercentage();
	topper(s1,s2,s3,s4,s5);
}
