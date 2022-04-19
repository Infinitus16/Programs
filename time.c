#include <stdio.h>
struct time
{
	int h,m,s;
}

typedef struct time Time;	

int main()
{
	Time t1,t2,t3;
	printf("FIRST TIME:\n");	
	printf("Enter hours,minutes and seconds:");
	scanf("%d,%d,%d",t1.h,t1.m,t1.s);
	/*t3.s=t1.s+t2.s;
	t3.m=t1.m+t2.m;
	t3.h=t1.h+t2.h;*/
}																	