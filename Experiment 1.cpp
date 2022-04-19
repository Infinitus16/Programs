#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;
class word
{
	public:
		char a[20],b[100];
		void enter()
		{
			gets(a);
			gets(b);
		}
		void display()
		{
			cout<<"Word- "<<a<<"\nMeaning- "<<b;
		}
}a,b;
int main()
{
	fstream fout("Exp 1.txt",ios::in|ios::out);
//	a.enter();
  	fout.write((char*)&a,sizeof(a));
//	fout.read((char*)&b,sizeof(b));
//	b.display();
	fout.close();
}
