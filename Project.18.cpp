#include<iostream>
using namespace std;
class circle
{
	protected:
		float radius,area,circum;
		void calculation()
		{
			circum=2*3.14*radius;
			area=3.14*radius*radius;
		}
	public:
		void enter()
		{
			cin>>radius;
			calculation();
		}
		void display()
		{
			cout<<"Area = "<<area<<", circumference = "<<circum;
		}
};
int main()
{
	circle c1;
	c1.enter();
	c1.display();
}
