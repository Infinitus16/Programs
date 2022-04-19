#include<stdio.h>
void add10(int num)
{
	num=num+10;
	printf("value inside function= %d",num);
}

int main()
{
	int num =10;
	printf("before calling %d",num);
	add10(num);
	printf("after calling= %d", num);
}
