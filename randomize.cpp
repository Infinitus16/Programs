#include <iostream>
#include <stdio.h>
#include <ctype.h>
#include<time.h>
using namespace std;
int main()
{
	randomize();
	int game[]={10,16},p;
	int turn = random(2)+5;
	for(int t=0;t<2;t++)
	{
		p=rand(2);
		cout<<games[p]+turn<<"#";
	}
	
	return 0;
}