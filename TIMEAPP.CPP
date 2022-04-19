#include<iostream>
using namespace std;
class Time
{
	protected:
		int  hh,mm,ss;
	public:
		// Constructors

		Time()
		{
			hh=0;
			mm=0;
			ss=0;
		}

		Time(int h)
		{
			hh=h;
			mm=0;
			ss=0;
		}

		Time(int h, int m)
		{
			hh=h;
			mm=m;
			ss=0;
		}

		Time(int h, int m, int s)
		{
			hh=h;
			mm=m;
			ss=s;
		}

		Time(Time &time)
		{
			hh=time.hh;
			mm=time.mm;
			ss=time.ss;
		}

		// input

		void input()
		{
			cout<<"Enter hours :";
			cin>>hh;
			cout<<"\nEnter minutes :";
			cin>>mm;
			cout<<"/nEnter seconds :";
			cin>>ss;
		}

		friend Time  addTime(Time t1, Time t2)
		{
			Time t3;
			t3.hh=t1.hh+t2.hh;
			t3.mm=t1.mm+t2.mm;
			t3.ss=t1.ss+t2.ss;
			if(t3.ss>=60)
			{
				t3.mm++;
				t3.ss=t3.ss-60;
			}

			if(t3.mm>=60)
			{
				t3.hh++;
				t3.mm=t3.mm-60;
			}

			return t3;
		}

	      /*	friend void  addTime(Time t1, Time t2)
		{

			hh=t1.hh+t2.hh;
			mm=t1.mm+t2.mm;
			ss=t1.ss+t2.ss;
			cout<<"Result :"<<hh<<":"<<mm<<":"<<ss;


		}       */



		void display()
		{
			cout<<hh<<":"<<mm<<":"<<ss;
		}


		// Operator Overloading

		friend Time operator+(Time t1, Time t2)
		{
			Time t3;
			t3.hh=t1.hh+t2.hh;
			t3.mm=t1.mm+t2.mm;
			t3.ss=t1.ss+t2.ss;
			if(t3.ss>=60)
			{
				t3.mm++;
				t3.ss=t3.ss-60;
			}

			if(t3.mm>=60)
			{
				t3.hh++;
				t3.mm=t3.mm-60;
			}

			return t3;
		}

		friend ostream& operator<<(ostream &cout, Time t)
		{
			cout<<t.hh<<":"<<t.mm<<":"<<t.ss;
			return cout;
		}

		friend istream& operator>>(istream &cin, Time &t)
		{
			cout<<"Enter hours ";
			cin>>t.hh;
			cout<<"Enter minutes ";
			cin>>t.mm;
			cout<<"Enter seconds ";
			cin>>t.ss;
			return cin;

		}

};

int main()
{
	Time t1,t2,t3;
	
	cout<<"\nFirst time ";
	cin>>t1;

	cout<<"\n\nSecond time :";
	cin>>t2;

	t3=t1+t2;
	cout<<t3;

}