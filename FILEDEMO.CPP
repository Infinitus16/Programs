#include<fstream.h>
#include<iostream.h>
#include<conio.h>

void main()
{
	ifstream fin;
	ofstream fout;
	int i,ans,ch,num,filenum,flag=0;
	clrscr();

	do
	{

	clrscr();
	cout<<"1. Add new number \n";
	cout<<"2. Delete a number \n";
	cout<<"3. Display all numbers \n";
	cout<<"4. Edit a number\n";
	cout<<"\n\nEnter your choice ";
	cin>>ch;
	switch(ch)
	{
		case 1:
			cout<<"Enter any number ";
			cin>>num;
			fout.open("numbers.dat",ios::app);
			fout<<num<<"\n";
			cout<<"Number added to file !!";
			fout.close();
			break;

	       case 2:
			cout<<"Enter number to delete ";
			cin>>num;
			fin.open("numbers.dat");
			fout.open("temp.dat");
			while(fin>>filenum)
			{
				if(num==filenum)
				{
					flag=1;
				}
				else
				{
					fout<<filenum<<"\n";
				}
			}

			fout.close();
			fin.close();

			fout.open("numbers.dat");
			fin.open("temp.dat");

			while(fin>>filenum)
			{
				fout<<filenum<<"\n";
			}

			fout.close();
			fin.close();

			if(flag==0)
			{
				cout<<"\nNumber not found in file !!";
			}
			else
			{
				cout<<"\n Number successfull deleted !!";
			}
		break;

		case 3:
			cout<<"\nContent of file\n\n";
			fin.open("numbers.dat");
			while(fin>>num)
			{
				cout<<num<<" ";
			}
			fin.close();
		break;

		case 4:

			cout<<"Enter number to edit ";
			cin>>num;
			fin.open("numbers.dat");
			fout.open("temp.dat");
			while(fin>>filenum)
			{
				if(num==filenum)
				{
					cout<<"Enter new number ";
					cin>>num;
					fout<<num<<"\n";
					flag=1;
				}
				else
				{
					fout<<filenum<<"\n";
				}
			}

			fout.close();
			fin.close();

			fout.open("numbers.dat");
			fin.open("temp.dat");

			while(fin>>filenum)
			{
				fout<<filenum<<"\n";
			}

			fout.close();
			fin.close();

			if(flag==0)
			{
				cout<<"\nNumber not found in file !!";
			}
			else
			{
				cout<<"\n Number successfull updated !!";
			}
		break;

		default:
			cout<<"\n\nInvalid choice\n\n";

	}
	cout<<"\n\n\nPress 1 to continue ...\n";
	cin>>ans;
	}while(ans==1);






	getch();
}
