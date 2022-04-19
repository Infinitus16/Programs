#include <fstream>
#include <iostream>
using namespace std;
class pertable
{

	ifstream kira;
	ofstream llawliet;
	public:
		char elname[20],elno[4],elsym[5],elmass[6],ch;
		
		char choose()
		{
			cout<<"\t\t\t\t\t\t\t\t\t\t\tPERIODIC TABLE\n\n";
			cout<<"1. Enter New Element.\n2. Get Information About an Element.\n3. Get the list Of Elements.\n\n";
			cout<<"Enter Your Choice:";
			cin>>ch;
			return (ch);
		}
			
	void Function()
	{
			
	switch(ch)
		{
			case '1':
					cout<<"\t\t\t\t\t\t\t\t\t\t\tPERIODIC TABLE\n\n";
					cout<<"Enter Atomic Number:";
					cin>>elno;
					cout<<"Enter Element Name:";
					cin>>elname;
					cout<<"Enter Symbol:";
					cin>>elsym;
					cout<<"Enter Atomic Mass:";
					cin>>elmass;
					cout<<"Details Saved Successfully!!\n\n";
					llawliet.open("periodictable.dat",ios::app|ios::binary);
					llawliet.write((char*)&elno,sizeof(elno));
					llawliet.write((char*)&elname,sizeof(elname));
					llawliet.write((char*)&elsym,sizeof(elsym));
					llawliet.write((char*)&elmass,sizeof(elmass));
					llawliet.close();
					break;
				
			case '2':	
					kira.open("periodictable.dat",ios::in|ios::binary);
					kira.read((char*)&elno,sizeof(elno));
					kira.read((char*)&elname,sizeof(elname));
					kira.read((char*)&elsym,sizeof(elsym));
					kira.read((char*)&elmass,sizeof(elmass));
					cout<<elno<<elname<<elsym<<elmass;
					break;
		}
		
	}
};


int main()
{	pertable p;
	p.choose();
    p.Function();
}