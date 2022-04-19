#include <iostream>
using namespace std;
class numbers
{
	protected:
		int a;

	public:
		void greatest()
		{	
			int max=0;
			for(int i=1;i<=3;i++)
			   	{
				cout<<"Enter a number:";
				cin>>a;
				if(a>max)
					max=a;
				}
				cout<<max;
		
		}	
	
};


int main()
{
	numbers o;
	o.greatest();
}