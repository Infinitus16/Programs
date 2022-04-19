#include<stdio.h>
void add10(int *num)
{
	*num=*num+10;
	printf("value inside function= %d, address inside num = %u",*num,num);
}

int main()
{
	int a =10;
	printf("before calling %d",a);
	add10(&a);
	printf("after calling= %d", a);
}
