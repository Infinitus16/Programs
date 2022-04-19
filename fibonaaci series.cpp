#include<iostream>
using namespace std;
class Fibonacci
{
	int a,b,c,n;
	public:
		 Fibonacci()
		 {
		 	a=1;
		 	b=1;
		 	n=5;
		 }
		 Fibonacci(int p,int q )
		 {
		 	a=p;
		 	b=q;
		 }
		  
		 void input()
		 {
		 	cout<<"Enter any two positive integers : "<<"\n";
		 	cin>>a>>b;
			cout<<"\n"<<"How many terms do you want : ";
			cin>>n;
		 	
		 	
		 }

		  	void Displayseries()
		  	{cout<<"Fibonacci series is : "<<a<<" "<<b<<" ";
		  	 for(int i=3;i<=n;i++)
		  	 {
		  	 	c=a+b;
		  	 	cout<<c<<" ";
		  	 	a=b;
		  	 	b=c;
			   }
			  }

};



int main()
{
	Fibonacci obj;
	obj.input();
	obj.Displayseries();
	
	
}
