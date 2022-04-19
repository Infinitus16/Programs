#include<iostream>
using namespace std;
class Sumofseries
{
	int i,s=0,a;
	public:
      void input()
      {
      	cout<<"Enter a no. :";
      	cin>>a;
      }
      
      
        void Calcsumofseries()
        {
        	for(i=1;i<=a;i++)
        	{
        		s=s+i;
        	}
			
			cout<<"sum of series = "<<s;
	
	}
};
		
		
	
