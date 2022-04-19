#include<iostream>
#include<math.h>
#include<conio.h>
using namespace std;
class day
{
	protected:
		int sum,rem=0,date,month,year,b=0,ctr=0;
	public:
		void enter()
		{
			cout<<"Enter the Date(DD), Month(MM), Year(YYYY) respectively-\n";
			cin>>date>>month>>year;
		}
		void calc()
		{
			int a=year%400;
			if(a>=0&&a<100)
			{
				while(b<=a)
				{
					b+=4;
					ctr++;
				}
				rem+=ctr*5;
				switch(a%4)
				{
					case 0:
						switch(month)
						{
							case 1:
								rem+=0;
								break;
							case 2:
								rem+=31;
								break;
							case 3:
								rem+=60;
								break;
							case 4:
								rem+=91;
								break;
							case 5:
								rem+=121;
								break;
							case 6:
								rem+=152;
								break;
							case 7:
								rem+=182;
								break;
							case 8:
								rem+=213;
								break;
							case 9:
								rem+=244;
								break;
							case 10:
								rem+=274;
								break;
							case 11:
								rem+=305;
								break;
							case 12:
								rem+=335;
								break;										
						}
						break;
					case 1:
						rem+=2;
						switch(month)
						{
							case 1:
								rem+=0;
								break;
							case 2:
								rem+=31;
								break;
							case 3:
								rem+=59;
								break;
							case 4:
								rem+=90;
								break;
							case 5:
								rem+=120;
								break;
							case 6:
								rem+=151;
								break;
							case 7:
								rem+=181;
								break;
							case 8:
								rem+=212;
								break;
							case 9:
								rem+=243;
								break;
							case 10:
								rem+=273;
								break;
							case 11:
								rem+=304;
								break;
							case 12:
								rem+=334;
								break;										
						}
						break;
					case 2:
						rem+=3;
						switch(month)
						{
							case 1:
								rem+=0;
								break;
							case 2:
								rem+=31;
								break;
							case 3:
								rem+=59;
								break;
							case 4:
								rem+=90;
								break;
							case 5:
								rem+=120;
								break;
							case 6:
								rem+=151;
								break;
							case 7:
								rem+=181;
								break;
							case 8:
								rem+=212;
								break;
							case 9:
								rem+=243;
								break;
							case 10:
								rem+=273;
								break;
							case 11:
								rem+=304;
								break;
							case 12:
								rem+=334;
								break;										
						}
						break;
					case 3:
						rem+=4;
						switch(month)
						{
							case 1:
								rem+=0;
								break;
							case 2:
								rem+=31;
								break;
							case 3:
								rem+=59;
								break;
							case 4:
								rem+=90;
								break;
							case 5:
								rem+=120;
								break;
							case 6:
								rem+=151;
								break;
							case 7:
								rem+=181;
								break;
							case 8:
								rem+=212;
								break;
							case 9:
								rem+=243;
								break;
							case 10:
								rem+=273;
								break;
							case 11:
								rem+=304;
								break;
							case 12:
								rem+=334;
								break;										
						}
						break;
				}
			}
			else if(a>=100&&a<200)
			{
				rem+=5;
				while(b<=(a-100))
				{
					b+=4;
					ctr++;
				}
				rem+=ctr*5;
				switch(a%4)
				{
					case 0:
						switch(month)
						{
							case 1:
								rem+=0;
								break;
							case 2:
								rem+=31;
								break;
							case 3:
								rem+=60;
								break;
							case 4:
								rem+=91;
								break;
							case 5:
								rem+=121;
								break;
							case 6:
								rem+=152;
								break;
							case 7:
								rem+=182;
								break;
							case 8:
								rem+=213;
								break;
							case 9:
								rem+=244;
								break;
							case 10:
								rem+=274;
								break;
							case 11:
								rem+=305;
								break;
							case 12:
								rem+=335;
								break;										
						}
						break;
					case 1:
						rem+=2;
						switch(month)
						{
							case 1:
								rem+=0;
								break;
							case 2:
								rem+=31;
								break;
							case 3:
								rem+=59;
								break;
							case 4:
								rem+=90;
								break;
							case 5:
								rem+=120;
								break;
							case 6:
								rem+=151;
								break;
							case 7:
								rem+=181;
								break;
							case 8:
								rem+=212;
								break;
							case 9:
								rem+=243;
								break;
							case 10:
								rem+=273;
								break;
							case 11:
								rem+=304;
								break;
							case 12:
								rem+=334;
								break;										
						}
						break;
					case 2:
						rem+=3;
						switch(month)
						{
							case 1:
								rem+=0;
								break;
							case 2:
								rem+=31;
								break;
							case 3:
								rem+=59;
								break;
							case 4:
								rem+=90;
								break;
							case 5:
								rem+=120;
								break;
							case 6:
								rem+=151;
								break;
							case 7:
								rem+=181;
								break;
							case 8:
								rem+=212;
								break;
							case 9:
								rem+=243;
								break;
							case 10:
								rem+=273;
								break;
							case 11:
								rem+=304;
								break;
							case 12:
								rem+=334;
								break;										
						}
						break;
					case 3:
						rem+=4;
						switch(month)
						{
							case 1:
								rem+=0;
								break;
							case 2:
								rem+=31;
								break;
							case 3:
								rem+=59;
								break;
							case 4:
								rem+=90;
								break;
							case 5:
								rem+=120;
								break;
							case 6:
								rem+=151;
								break;
							case 7:
								rem+=181;
								break;
							case 8:
								rem+=212;
								break;
							case 9:
								rem+=243;
								break;
							case 10:
								rem+=273;
								break;
							case 11:
								rem+=304;
								break;
							case 12:
								rem+=334;
								break;										
						}
						break;
				}
			}
			else if(a>=200&&a<300)
			{
				rem+=3;
				while(b<=(a-200))
				{
					b+=4;
					ctr++;
				}
				rem+=ctr*5;
				switch(a%4)
				{
					case 0:
						switch(month)
						{
							case 1:
								rem+=0;
								break;
							case 2:
								rem+=31;
								break;
							case 3:
								rem+=60;
								break;
							case 4:
								rem+=91;
								break;
							case 5:
								rem+=121;
								break;
							case 6:
								rem+=152;
								break;
							case 7:
								rem+=182;
								break;
							case 8:
								rem+=213;
								break;
							case 9:
								rem+=244;
								break;
							case 10:
								rem+=274;
								break;
							case 11:
								rem+=305;
								break;
							case 12:
								rem+=335;
								break;										
						}
						break;
					case 1:
						rem+=2;
						switch(month)
						{
							case 1:
								rem+=0;
								break;
							case 2:
								rem+=31;
								break;
							case 3:
								rem+=59;
								break;
							case 4:
								rem+=90;
								break;
							case 5:
								rem+=120;
								break;
							case 6:
								rem+=151;
								break;
							case 7:
								rem+=181;
								break;
							case 8:
								rem+=212;
								break;
							case 9:
								rem+=243;
								break;
							case 10:
								rem+=273;
								break;
							case 11:
								rem+=304;
								break;
							case 12:
								rem+=334;
								break;										
						}
						break;
					case 2:
						rem+=3;
						switch(month)
						{
							case 1:
								rem+=0;
								break;
							case 2:
								rem+=31;
								break;
							case 3:
								rem+=59;
								break;
							case 4:
								rem+=90;
								break;
							case 5:
								rem+=120;
								break;
							case 6:
								rem+=151;
								break;
							case 7:
								rem+=181;
								break;
							case 8:
								rem+=212;
								break;
							case 9:
								rem+=243;
								break;
							case 10:
								rem+=273;
								break;
							case 11:
								rem+=304;
								break;
							case 12:
								rem+=334;
								break;										
						}
						break;
					case 3:
						rem+=4;
						switch(month)
						{
							case 1:
								rem+=0;
								break;
							case 2:
								rem+=31;
								break;
							case 3:
								rem+=59;
								break;
							case 4:
								rem+=90;
								break;
							case 5:
								rem+=120;
								break;
							case 6:
								rem+=151;
								break;
							case 7:
								rem+=181;
								break;
							case 8:
								rem+=212;
								break;
							case 9:
								rem+=243;
								break;
							case 10:
								rem+=273;
								break;
							case 11:
								rem+=304;
								break;
							case 12:
								rem+=334;
								break;										
						}
						break;
				}
			}
			else if(a>=300&&a<400)
			{
				rem+=1;
				while(b<=(a-300))
				{
					b+=4;
					ctr++;
				}
				rem+=ctr*5;
				switch(a%4)
				{
					case 0:
						switch(month)
						{
							case 1:
								rem+=0;
								break;
							case 2:
								rem+=31;
								break;
							case 3:
								rem+=60;
								break;
							case 4:
								rem+=91;
								break;
							case 5:
								rem+=121;
								break;
							case 6:
								rem+=152;
								break;
							case 7:
								rem+=182;
								break;
							case 8:
								rem+=213;
								break;
							case 9:
								rem+=244;
								break;
							case 10:
								rem+=274;
								break;
							case 11:
								rem+=305;
								break;
							case 12:
								rem+=335;
								break;										
						}
						break;
					case 1:
						rem+=2;
						switch(month)
						{
							case 1:
								rem+=0;
								break;
							case 2:
								rem+=31;
								break;
							case 3:
								rem+=59;
								break;
							case 4:
								rem+=90;
								break;
							case 5:
								rem+=120;
								break;
							case 6:
								rem+=151;
								break;
							case 7:
								rem+=181;
								break;
							case 8:
								rem+=212;
								break;
							case 9:
								rem+=243;
								break;
							case 10:
								rem+=273;
								break;
							case 11:
								rem+=304;
								break;
							case 12:
								rem+=334;
								break;										
						}
						break;
					case 2:
						rem+=3;
						switch(month)
						{
							case 1:
								rem+=0;
								break;
							case 2:
								rem+=31;
								break;
							case 3:
								rem+=59;
								break;
							case 4:
								rem+=90;
								break;
							case 5:
								rem+=120;
								break;
							case 6:
								rem+=151;
								break;
							case 7:
								rem+=181;
								break;
							case 8:
								rem+=212;
								break;
							case 9:
								rem+=243;
								break;
							case 10:
								rem+=273;
								break;
							case 11:
								rem+=304;
								break;
							case 12:
								rem+=334;
								break;										
						}
						break;
					case 3:
						rem+=4;
						switch(month)
						{
							case 1:
								rem+=0;
								break;
							case 2:
								rem+=31;
								break;
							case 3:
								rem+=59;
								break;
							case 4:
								rem+=90;
								break;
							case 5:
								rem+=120;
								break;
							case 6:
								rem+=151;
								break;
							case 7:
								rem+=181;
								break;
							case 8:
								rem+=212;
								break;
							case 9:
								rem+=243;
								break;
							case 10:
								rem+=273;
								break;
							case 11:
								rem+=304;
								break;
							case 12:
								rem+=334;
								break;										
						}
						break;
				}
			}
			rem+=(date-1);
		}
		void display()
		{
			switch(rem%7)
			{
				case 0:
					cout<<"It was/would be Monday";
					break;
				case 1:
					cout<<"It was/would be Tuesday";
					break;
				case 2:
					cout<<"It was/would be Wednesday";
					break;
				case 3:
					cout<<"It was/would be Thursday";
					break;
				case 4:
					cout<<"It was/would be Friday";
					break;
				case 5:
					cout<<"It was/would/is be Saturday";
					break;
				case 6:
					cout<<"It was/would/is be Sunday";
					break;
			}
			cout<<". Press any key to exit.";
			getch();
		}
};
int main()
{
	day d1;
	d1.enter();
	d1.calc();
	d1.display();
}
