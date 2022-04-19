#include <iostream>
using namespace std;
int main()
{

	int num[15],res;
	char ch[14];
	for(int i=1;i<15;i++)
	{
		cin>>num[i];
		cin>>ch[i];
		
		if(ch[i]=='=')
			break;
		
		else
		{
			switch(ch[i])
			{
				case '+':
					res=num[i-1]+num[i];
					
				case '-':
					res=num[i-1]-num[i];
					
				case '*':
					res=num[i-1]*num[i];
					
				case '/':
					res=num[i-1]/num[i];			
			}
		}
	}
	
	cout<<res;
}




