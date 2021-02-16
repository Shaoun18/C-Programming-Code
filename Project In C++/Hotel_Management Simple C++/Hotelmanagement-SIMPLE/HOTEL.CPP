#include<iostream>
#include<conio.h>
#include<fstream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
class hotel
{
    private:
            int room_no;
            char name[30];
            char address[50];
            char phone[10];
    public:
            void main_menu();
            void add();
            void display();
            void rooms();
            void edit();
            int check(int);
            void modify(int);
            void delete_rec(int);
            void bill(int);
            void back();
};
void hotel::main_menu()
{

    int choice;
                while(choice!=5)
                {

                system("cls");
                cout<<"\n\t\t\t\t*****************************";
                cout<<"\n\t\t\t\t OUR HOTEL MANAGEMENT SYSTEM ";
                cout<<"\n\t\t\t\t       * MAIN MENU *";
                cout<<"\n\t\t\t\t*****************************";
                cout<<"\n\n\n\t\t\t1.Book A Room";
                cout<<"\n\t\t\t2.Customer Records";
                cout<<"\n\t\t\t3.Rooms Allotted";
                cout<<"\n\t\t\t4.Edit Record";
                cout<<"\n\t\t\t5.Exit";
                cout<<"\n\n\t\t\tEnter Your Choice: ";
                cin>>choice;

                switch(choice)
                {

                case 1:	add();
                break;

                case 2: display();
                break;

                case 3: rooms();
                break;

                case 4:	edit();
                break;

                case 5: exit(0);


                default:try
                        {
                            if(choice>5)
                            {
                                throw choice;
                            }
                        }
                        catch(int num)
                        {
                            cout<<"***Warning!please try again later"<<endl;
                            main_menu();
                        }

                }

                }

}
void hotel::back()
{
    int b;
    cout<<"If you want to back home(1/0):";
    cin>>b;
    if(b==1)
    {
        main_menu();
    }
    else
    {
        exit(0);
    }
}

void hotel::add()
{

                system("cls");
                int r,flag;
                ofstream fout("Record.txt");

                cout<<"\n Enter Customer Detalis";
                cout<<"\n ----------------------";
                cout<<"\n\n Room no: ";
                cout<<"\n Total no. of Rooms - 50";
                cout<<"\n Ordinary Rooms from 1 - 30";
                cout<<"\n Luxuary Rooms from 31 - 45";
                cout<<"\n Royal Rooms from 46 - 50";
                cout <<"\n Enter The Room no. you want to stay in :- ";
                cin>>r;

                flag=check(r);

                if(flag)
                {
                    cout<<"\n Sorry..!!!Room is already booked";
                    main_menu();
                }

                else
                {
                cout <<"\n***Please give us your information to book your Room***"<<endl;
                room_no=r;
                cout<<" Name: ";
                cin>>name;
                cout<<" Address: ";
                cin>>address;
                cout<<" Phone No: ";
                cin>>phone;

                fout.write((char*)this,sizeof(hotel));
                cout<<"\nCongratulation!Your Room is booked...!!!";
                cout<<"\nIf you want to back home(1/0):";
                int num;
                cin>>num;
                if(num==1)
                {
                    main_menu();
                }
                }
                getch();
                fout.close();

}

void hotel::display()
{

  system("cls");

ifstream fin("Record.txt");
int r,flag;

cout<<"\n Enter room no. for a particular customer`s details :- ";
cin>>r;
while(!fin.eof())
{

fin.read((char*)this,sizeof(hotel));
if(room_no==r)
{
    system("cls");
    cout<<"\n Cusromer Details";
    cout<<"\n ----------------";
    cout<<"\n\n Room no: "<<room_no;
    cout<<"\n Name: "<<name;
    cout<<"\n Address: "<<address;
    cout<<"\n Phone no: "<<phone;
    flag=1;
}

}

if(flag==0)
cout<<"\n Sorry Room no. not found or vacant....!!"<<endl;
back();
fin.close();
}
void hotel::rooms()
{

  system("cls");

ifstream fin("Record.txt");
cout<<"\n\t\t\t    List Of Rooms Allotted";
cout<<"\n\t\t\t    ----------------------";
cout<<"\n\n Room No.\tName\t\tAddress\t\t\t\tPhone No.\n";

while(!fin.eof())
{

fin.read((char*)this,sizeof(hotel));
cout<<"\n\n "<<room_no<<"\t\t"<<name;
cout<<"\t\t"<<address<<"\t\t"<<phone;

}
back();
fin.close();

}


//FUNCTION FOR EDITING RECORDS AND FOR BILL


void hotel::edit()
{

  system("cls");

int choice,r;
cout<<"\n EDIT MENU";
cout<<"\n ---------";
cout<<"\n\n 1.Modify Customer Record";
cout<<"\n 2.Delete Customer Record";
cout<<"\n 3. Bill Of Customer";
cout<<"\n Enter your choice: ";

cin>>choice;
  system("cls");

cout<<"\n Enter room no: " ;
cin>>r;

switch(choice)
{

case 1:	modify(r);
break;

case 2:	delete_rec(r);
break;

case 3: bill(r);
break;

default: cout<<"\n Wrong Choice.....!!";

}
cout<<"\n Press any key to continue....!!!";

getch();
}


int hotel::check(int r)
{

int flag=0;

ifstream fin("Record.txt");

while(!fin.eof())
{

fin.read((char*)this,sizeof(hotel));
if(room_no==r)
{

flag=1;
break;

}

}

fin.close();
return(flag);

}


void hotel::modify(int r)
{

long pos,flag=0;

fstream file("Record.txt");

while(!file.eof())
{

pos=file.tellg();
file.read((char*)this,sizeof(hotel));

if(room_no==r)
{

cout<<"\n Enter New Details";
cout<<"\n -----------------";
cout<<"\n Name: ";
cin>>name;
cout<<" Address: ";
cin>>address;
cout<<" Phone no: ";
cin>>phone;
file.seekg(pos);
file.write((char*)this,sizeof(hotel));
cout<<"\n Record is modified....!!";
flag=1;
break;

}

}

if(flag==0)
cout<<"\n Sorry Room no. not found or vacant...!!";
file.close();

}

void hotel::delete_rec(int r)
{

int flag=0;
char ch;
ifstream fin("Record.txt");
ofstream fout("temp.txt");

while(!fin.eof())
{

fin.read((char*)this,sizeof(hotel));
if(room_no==r)

{

cout<<"\n Name: "<<name;
cout<<"\n Address: "<<address;
cout<<"\n Pone No: "<<phone;
cout<<"\n\n Do you want to delete this record(y/n): ";
cin>>ch;

if(ch=='n')
fout.write((char*)this,sizeof(hotel));
flag=1;

}

else
fout.write((char*)this,sizeof(hotel));

}

fin.close();
fout.close();

if(flag==0)
cout<<"\n Sorry room no. not found or vacant...!!";

else
{

remove("Record.txt");
rename("temp.txt","Record.txt");

}

}



void hotel::bill(int r)
{

hotel h1;
ifstream f1;
 f1.open("record.txt",ios::in|ios::binary);

if(!f1)
 cout<<"cannot open";

 else
 {

  f1.read((char*)&h1,sizeof (hotel));
  while(f1)

  {

  f1.read((char*)&h1,sizeof(hotel));

  }

  if (h1.room_no == r)
  {

  if(h1.room_no>=1&&h1.room_no<=30)
  cout<<"your bill = 2000";

  else if (h1.room_no>=35&&h1.room_no<=45)
  cout<<"your bill = 5000" ;

  else
  cout<<"your bill = 7000";

  }

  else
  { cout<<"room no. not found";}

  }

  f1.close();
}


int main()
{
    hotel h;
    system("cls");
    h.main_menu();
    getch();
}


