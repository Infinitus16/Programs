#include<iostream>
using namespace std;
class spcp
{
	int sp,cp,res;
	public:
		
		void input()
		{
			cout<<"Enter sp and cp";
			cin>>cp>>sp;
			
	     }
	     void calcresult()
	     {
		 
if(sp>cp)
{
res=sp-cp;
cout<<"Profit = "<< res;
}
else if(cp>sp)
{
res=cp-sp;
cout<<"Loss = "<<res;
}
else
{
cout<<"There is no profit or loss";
}
}
};
int main()
{
	spcp o;
	o.input();
	o.calcresult();
}

