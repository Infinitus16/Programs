#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;
int main()
{
	ifstream fin;
	ofstream fout;
	int ch,ans;
	int rollno=1;
	char name[100], contact[10],cl[10], cls[10];
	int m1,m2,m3;
	do
	{
	cout<<"1. Add New Student\n";
	cout<<"2. Display all students\n";
	cout<<"3. Search student class wise \n";
	cout<<"4. Show Result classwise \n";
	cout<<"5. Show result roll number wise \n";
	cout<<"\n_______________________________________________";

	cout<<"\nEnter your choice: ";
	cin>>ch;
	cout<<"_______________________________________________\n\n";
	switch(ch)
	{
		case 1:
			fin.open("student.dat");
			while(fin>>rollno>>name>>contact>>cl>>m1>>m2>>m3);
			fin.close();
			cout<<"Enter details for rollnumber "<<rollno<<"\n\n";
			cout<<"Enter name of the student :";
			cin>>name;
			cout<<"\nEnter contact number of the student :";
			cin>>contact;
			cout<<"\nEnter class of student :";
			cin>>cl;
			cout<<"\nEnter marks in three subjects :\n";
			cin>>m1>>m2>>m3;
			fout.open("student.dat",ios::app);
			fout<<rollno<<"\t"<<name<<"\t"<<contact<<"\t"<<cl<<"\t"<<m1<<"\t"<<m2<<"\t"<<m3<<"\n\n";
			cout<<"\nRecord successfully saved !!";
			fout.close();
			rollno=rollno+1;
			break;

		case 2:
		cout<<"Student details \n\n";
			fin.open("student.dat");
			while(fin>>rollno>>name>>contact>>cl>>m1>>m2>>m3)
			{
				cout<<rollno<<"\t"<<name<<"\t"<<contact<<"\t"<<cl<<"\t"<<m1<<"\t"<<m2<<"\t"<<m3<<"\n";
			}
			fin.close();

		break;
		case 3:
			cout<<"Enter class name \n";
			cin>>cls;
			cout<<"Student details \n\n";
			fin.open("student.dat");
			while(fin>>rollno>>name>>contact>>cl>>m1>>m2>>m3)
			{
			if(strcmp(cl,cls)==0)
			{
			cout<<rollno<<"\t"<<name<<"\t"<<contact<<"\t"<<cl<<"\t"<<m1<<"\t"<<m2<<"\t"<<m3<<"\n";
			}

			}
		    fin.close();
			break;

		case 4:
			cout<<"Enter class name \n";
			cin>>cls;
			cout<<"class result \n\n";
			fin.open("student.dat");
			while(fin>>rollno>>name>>contact>>cl>>m1>>m2>>m3)
			{
			if(strcmp(cl,cls)==0)
			{
			int sum=m1+m2+m3;
			int per=(sum*100)/300	;
			cout<<rollno<<"\t"<<name<<"\t"<<contact<<"\t"<<cl<<"\t"<<m1<<"\t"<<m2<<"\t"<<m3<<"\t"<<sum<<"\t"<<per<<" %"<<"\n";
			}

			}
		    fin.close();
			break;
		case 5:
			int rn;
			cout<<"Enter roll number \n";
			cin>>rn;
			cout<<"Student result \n\n";
			fin.open("student.dat");
			while(fin>>rollno>>name>>contact>>cl>>m1>>m2>>m3)
			{
			if(rn==rollno)
			{
			int sum=m1+m2+m3;
			int per=(sum*100)/300	;
			cout<<rollno<<"\t"<<name<<"\t"<<contact<<"\t"<<cl<<"\t"<<m1<<"\t"<<m2<<"\t"<<m3<<"\t"<<sum<<"\t"<<per<<" %"<<"\n";
			break;
			}
			}
		    fin.close();
			break;
		default:
			cout<<"Invalid choice. Please try again\n\n";
	}
	cout<<"\n************************************************************************************************************************************************************************\n";
	//cout<<"\n________________________________________________________________________________________________________________________\n";
	cout<<"\nPress 1 to continue ...";
	cin>>ans;
	}while(ans==1);
	cout<<"\n\n++++++++++++++++++++++++++++++";
	cout<<"\nThanks for using application.\nDeveloped by SHIVANSH.\n++++++++++++++++++++++++++++++\n\nPress any key to exit...";
}

