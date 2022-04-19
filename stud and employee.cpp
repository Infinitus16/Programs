#include<iostream>
#include<ctype.h>
#include<stdio.h>
#include<conio.h>
using namespace std;
class person
{
	public:
	char identifierid[15];
	char name[20],sex;
	
	void input()
	{
		
	cout<<"Enter Id :";
	cin>>identifierid;
	cout<<"Enter name:";
	cin>>name;
	cout<<"Enter sex (M , F , O)";
	cin>>sex;
	
	}
};

class student: public person
{
	public:
	char specs[20];
	
	void inputplus()
	{
		cout<<"Enter specialisation:";
		cin>>specs;
	}
};

class employee:public person
{
	public:
	int salary;
	char work[20];
	
	void inputplus()
	{
		cout<<"Enter salary:";
		cin>>salary;
		cout<<"Enter The Work he do:";
		cin>>work;
	}
};

int main()
{
	student s;
	cout<<"						STUDENT		"<<"\n\n";
	s.input();
	s.inputplus();
	
	
	
	employee e;
	cout<<"\n						EMPLOYEE		"<<"\n\n";
	e.input();
	e.inputplus();
	
	
	
	clrscr();

}