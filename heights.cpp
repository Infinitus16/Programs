#include<iostream>
using namespace std;
class Student
{
	protected:
		int height;
		
	public:
		
		void input()
		{
			cout<<"\nEnter height of Student :";
			cin>>height;			
			
		}	
		
		
		friend void calcAboveAverageHeight(Student *std, int n)
		{			
			float avg;
			float sum=0;   
			
			// loop to find average
			
			for(int i=0;i<n;i++)
			{
				sum=sum+std[i].height;
			}   	
			
			avg=sum/n;
			cout<<"\n\nAverage height is : "<<avg;			
			int count=0;
			
			for(int i=0;i<n;i++)
			{
				
				if(std[i].height>avg)
				{
					
					count++;
				}
						
			}
			cout<<"\n\nStudents with above average height are :"<<count<<"\n\n";						
		}
			
};



int main()
{
	Student s[100];
	int n;
	cout<<"Enter Number Of Students :";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		s[i].input();
	}
	calcAboveAverageHeight(s,n);
}