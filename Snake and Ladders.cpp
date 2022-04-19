#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include<time.h>
#include<conio.h>
using namespace std;
int main()
{
    cout<<"Welcome to the Snake-Ladder game, Version : 1 "<<endl<<"Please enter how many players there are"<<endl;
    int n,ctr=0,r=0,j=0;
    int  *p;
    char k;
    cin>>n;
	p=new int[n];
    for(int i=0;i<n;i++)
    {
         p[i]=0;

    }

    //clrscr();
    do{
        cout<<"please press enter to roll the die."<<j+1<<endl;
        cin>>k;
		for(;j<=(n-1);j++)
        {
            if( p[j]==100)
            {
                if(j==(n-1))
                    goto change;
                continue;
            }
            else break;
        }
        srand(time(0));
        r=(rand()%6)+1;
        cout<<"you got"<< r<<endl;
         p[j]= p[j]+r;
        switch( p[j])
        {
        case 27:
            cout<<"oops, bitten by a snake,fall on 6";
             p[j]=6;
            break;


        case 54:
            cout<<"oops, bitten by a snake,fall on 15";
             p[j]=15;
            break;

        case 59:
            cout<<"oops, bitten by a snake,fall on 24";
             p[j]=24;
            break;
        case 72:
            cout<<"oops, bitten by a snake,fall on 53";
             p[j]=53;
            break;
        case 85:
            cout<<"oops, bitten by a snake,fall on 63";
             p[j]=63;
            break;
        case 92:
            cout<<"oops, bitten by a snake,fall on 67";
             p[j]=67;
            break;
        case 98:
            cout<<"oops, bitten by a snake,fall on 11";
             p[j]=11;
            break;
        case 5:
            cout<<"congrats, you ladder upto 36";
             p[j]=36;
            break;
        case 20:
            cout<<"congrats, you ladder upto 61";
             p[j]=61;
            break;
        case 35:
            cout<<"congrats, you ladder upto 55";
             p[j]=55;
            break;

        case 51:
            cout<<"congrats, you ladder upto 90";
             p[j]=90;
            break;
        case 57:
            cout<<"congrats, you ladder upto 86";
             p[j]=86;
            break;
        case 73:
            cout<<"congrats, you ladder upto 91";
             p[j]=91;
            break;
        default:
            cout<<"now you are on "<< p[j];
            break;

        }

        if( p[j]==100)
            ctr++;

        if(j==(n-1))
        {

            change: j=0;
            //clrscr();
        }
        else j++;
        //clrscr();

 }while(!(ctr==(n-1)));
   cout<<"thanks for playing"<<endl;
    }


