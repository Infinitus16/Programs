#include<iostream>
#include<fstream>
#include<cstring>
#include<cstdlib>
#include<conio.h>
#include<ctime>
using namespace std;
class anime
{
	public:
		int ctr=0,ctr1;
		char anime_name[50],guess[50];
		void play();
		void add();
}a,a1;
class hollywood
{
	public:
		int ctr=0,ctr1;
		char hwood_name[50],guess[50];
		void play();
		void add();
}h;
class bollywood
{
	public:
		int ctr=0,ctr1;		
		char bwood_name[50],guess[50];
		void play();
		void add();
}b;
void anime::add()
{
	char null[1];
	ofstream f;
	f.open("Hangman_Anime.dat",ios::app);	
	cout<<"Enter the name:";
	gets(null);
	gets(a.anime_name);
	f.write((char*)&a,sizeof(a));
	f.close();
}
void anime::play()
{
	ifstream l;
	l.open("Hangman_Anime.dat",ios::app);
	while(l.read((char*)&a,sizeof(a)))
	{
		l.read((char*)&a,sizeof(a));
		ctr++;
	}
	
	srand(time(0));
	ctr1=rand()%100+1;
	while(1)
	{
		if(ctr1>ctr)
		ctr1=ctr1-ctr;
		else if(ctr1<=ctr)
		break;
	}
	l.seekg(sizeof(a)*ctr1);
	l.read((char*)&a,sizeof(a));
	for(int i=0;i<sizeof(a.anime_name);i++)
	{
		if(a.anime_name[i]=='a'||a.anime_name[i]=='e'||a.anime_name[i]=='i'||a.anime_name[i]=='o'||a.anime_name[i]=='u')
		cout<<a.anime_name[i];
		else
		{
		if(a.anime_name[i]==' ')
		cout<<" ";
		else
		cout<<"-";
		}
	}
	cout<<"\nGuess:";
	int ex=1;
	while(ex!=0)
	{
		gets(guess);
		if(strcmp(guess,"a.anime_name")==0)
		{
			cout<<"BINGO!";	
			break;
		}
		if(strcmp(guess,"a.anime_name")==1)
		{
			cout<<"Press 1 to continue and 0 to exit";
			cin>>ex;
		}
	}
	if(ex==0)
	cout<<"The anime was: ";
	puts(a.anime_name);
	l.close();
}
void hollywood::add()
{
	ofstream f;
	f.open("Hangman_Hollywood.dat",ios::app);	
	cout<<"Enter the name:";
	gets(h.hwood_name);
	f.write((char*)&h,sizeof(h));
	f.close();
}
void hollywood::play()
{
	ifstream l;
	l.open("Hangman_Hollywood.dat",ios::app);
	while(l.read((char*)&h,sizeof(h)))
	{
		l.read((char*)&h,sizeof(h));
		ctr++;
	}
	srand(time(0));
	ctr1=rand()%100+1;
	while(1)
	{
		if(ctr1>ctr)
		ctr1=ctr1-ctr;
		else if(ctr1<=ctr)
		break;
	}
	l.seekg(sizeof(h)*ctr1);
	l.read((char*)&h,sizeof(h));
	for(int i=0;i<50;i++)
	{
		if(h.hwood_name[i]=='a'||h.hwood_name[i]=='e'||h.hwood_name[i]=='i'||h.hwood_name[i]=='o'||h.hwood_name[i]=='u')
		cout<<h.hwood_name[i];
		if(h.hwood_name[i]==' ')
		cout<<" ";
		else
		cout<<"-";
	}
	cout<<"\nGuess:";
	int ex=1;
	while(ex!=0)
	{
		gets(guess);
		if(strcmp(guess,"h.hwood_name")==0)
		{
			cout<<"BINGO!";	
			break;
		}
		if(strcmp(guess,"h.hwood_name")==1)
		{
			cout<<"Press 1 to continue and 0 to exit";
			cin>>ex;
		}
	}
	if(ex==0)
	cout<<"The movie was: ";
	puts(h.hwood_name);
	l.close();
}
void bollywood::add()
{
	ofstream f;
	f.open("Hangman_Bollywood.dat",ios::app);	
	cout<<"Enter the name:";
	gets(b.bwood_name);
	f.write((char*)&b,sizeof(b));
	f.close();
}
void bollywood::play()
{
	ifstream l;
	l.open("Hangman_Bollywood.dat",ios::app);
	while(l.read((char*)&b,sizeof(b)))
	{
		l.read((char*)&b,sizeof(b));
		ctr++;
	}
	srand(time(0));
	ctr1=rand()%100+1;
	while(1)
	{
		if(ctr1>ctr)
		ctr1=ctr1-ctr;
		else if(ctr1<=ctr)
		break;
	}
	l.seekg(sizeof(b)*ctr1);
	l.read((char*)&b,sizeof(b));
	for(int i=0;i<50;i++)
	{
		if(b.bwood_name[i]=='a'||b.bwood_name[i]=='e'||b.bwood_name[i]=='i'||b.bwood_name[i]=='o'||b.bwood_name[i]=='u')
		cout<<b.bwood_name[i];
		if(b.bwood_name[i]==' ')
		cout<<" ";
		else
		cout<<"-";
	}
	cout<<"\nGuess:";
	int ex=1;
	while(ex!=0)
	{
		gets(guess);
		if(strcmp(guess,"b.bwood_name")==0)
		{
			cout<<"BINGO!";	
			break;
		}
		if(strcmp(guess,"b.bwood_name")==1)
		{
			cout<<"Press 1 to continue and 0 to exit";
			cin>>ex;
		}
	}
	if(ex==0)
	cout<<"The movie was: ";
	puts(b.bwood_name);
	l.close();
}
void start()
{
	int i,a1,b1,c=1;
	char password[6];
	cout<<"========================================================================================================================================\n\n\t\t\t\t\t\t\tWelcome to 'Hangman'!";
	while(c==1)
	{
		cout<<"\n\nWhat do you want to do?\n1)Play\n2)Add\n";
		cin>>a1;
		switch(a1)
		{
			case 1:
				cout<<"Choose:\n1)Anime\n2)Hollywood Movies\n3)Bollywood Movies\n";
				cin>>b1;
				switch(b1)
				{
					case 1:
						a.play();
						break;
					case 2:
						h.play();
						break;
					case 3:
						b.play();
						break;
					default:
						break;
				}
				break;
			case 2:
				cout<<"Enter the password.\n";
				for(i=0;i<6;i++)
				{
					password[i]=getch();
					cout<<"*";
				}
				if(strcmp(password,"naruto")==0)
				{
					cout<<"\n\nEnter the cateogry you want to change:\n1)Anime\n2)Hollywood Movies\n3)Bollwood Movies\n";
					cin>>b1;
					switch(b1)
					{
						case 1:
							a.add();
							break;
						case 2:
							h.add();
							break;
						case 3:
							b.add();
							break;
						default:
							break;
					}
				}
				else
				{
					cout<<"\nWrong password";
				}
				break;
			default:
				break;
		}
	}
	cout<<"\n\n\t\t\t\t\t\t\t  Thanks for Playing.\n\t\t\t\t\t\t     Developed by Anant Pandey.\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
}
int main()
{
	start();
}
