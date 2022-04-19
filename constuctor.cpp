#include<iostream>
using namespace std;
class square
{
	public:
		float x;		
	public:	
		square()
		{
			x=10;
		}
		square(float a)
		{
			x=a;
		}
		square(square &s)
		{
			x=s.x;
		}
		void input()
		{
			cin>>x;
		}
		void calcsquare()
		{
			float y=x*x;
			cout<<y;
		}
};
int main()
{
	square s1(7),s2(s1);
	s1.calcsquare();
	cout<<"\n"<<s2.x;
}
