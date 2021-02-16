#include<iostream>
#include<fstream>
#include<conio.h>
#include <stdlib.h>
#include<cmath>
#include <ctime>
#define tax 5.5
using namespace std;

//Menu Cataglories class here.

class cataglories
{
    public:
    void male();
    void shirt();
    double shirt_value();
    void pubjabi();
    double pubjabi_value();
    void back();
};

//Menu user option class here.

class user_option
{
    string first_name,last_name,id,c_id,birth_date,password,c_password;
    string check_id,check_pass;
    char shamim;
    public:
    int signup();
    int signin();
    void admin();
    void user()
    {
            admin();
    }
    void back2();

};

//Time function declare here.

void time()
{
    time_t t = time(NULL);
  tm* timePtr = localtime(&t);

  cout << "\t\t\t\t\t\t\t\t\t   Date: " <<(timePtr->tm_mday)<<"/"<< (timePtr->tm_mon)+1 <<"/"<< (timePtr->tm_year)+1900<< endl;
  cout << "\t\t\t\t\t\t\t\t\t   Time: " << (timePtr->tm_hour)<<":"<< (timePtr->tm_min)<<":"<< (timePtr->tm_sec) << endl;
}

//Main Function here.

int main()
{
    char choice;
    system("COLOR 1F");
     /* 0 = Black       8 = Gray
        1 = Blue        9 = Light Blue
        2 = Green       A = Light Green
        3 = Aqua        B = Light Aqua
        4 = Red         C = Light Red
        5 = Purple      D = Light Purple
        6 = Yellow      E = Light Yellow
        7 = White       F = Bright White
     */
    cout<<"\n\t\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB1\xB1\xB1\xB1\xB1\xB1\xB1 welcome to Our Ecommerce project \xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB2\xB2\xB2\xB2\xB2\xB2\xB2"<<endl;
    time();
    cout<<"\t\t\t    ***Cataglories***\t\t\t         ***Payment Method***\t\t\t         ***User Menu***"<<endl;
    cout<<"\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 || \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 || \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2*\n\t\t\xB2\t\t\t\t\t \xB2 || \xB2\t\t\t\t\t       \xB2 || \xB2\t\t\t\t\t     \xB2**\n\t\t\xB2 1.Male \t\t\t\t \xB2 || \xB2\t\t 1.bKash\t\t       \xB2 || \xB2 1.Sign In      \t\t\t     \xB2***\n\t\t\xB2 2.Female       \t\t\t \xB2 || \xB2\t\t 2.DBBL \t\t       \xB2 || \xB2 2.Sign Up      \t\t\t     \xB2****\n\t\t\xB2 3.Children     \t\t\t \xB2 || \xB2\t\t 3.Roket\t\t       \xB2 || \xB2\t\t\t\t\t     \xB2*****\n\t\t\xB2\t\t\t\t\t \xB2 || \xB2\t\t 4.Master Card     \t       \xB2 || \xB2\t\t\t\t\t     \xB2******\n\t\t\xB2\t\t\t\t\t \xB2 || \xB2\t\t 5.City Bank    \t       \xB2 || \xB2\t\t\t\t\t     \xB2*******\n\t\t\xB2\t\t\t\t\t \xB2 || \xB2\t\t 6.Islamic Bank \t       \xB2 || \xB2\t\t\t\t\t     \xB2********\n\t\t\xB2\t\t\t\t\t \xB2 || \xB2\t\t\t\t\t       \xB2 || \xB2\t\t\t\t\t     \xB2*********\n\t\t\xB2\t\t\t\t\t \xB2 || \xB2\t\t\t\t\t       \xB2 || \xB2\t\t\t\t\t     \xB2**********\n\t\t\xB2\t\t\t\t\t \xB2 || \xB2\t\t\t\t\t       \xB2 || \xB2\t\t\t\t\t     \xB2***********\n\t\t\xB2\t\t\t\t\t \xB2 || \xB2\t\t\t\t\t       \xB2 || \xB2\t\t\t\t\t     \xB2************\n\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 || \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 || \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2"<<endl;
    cout<<"\n\t\t------------------------------------------------------------------"<<endl;
    cout<<"\t\t| ***Note: Cataglories = c || Payment Method = p || User Menu= u |"<<endl;
    cout<<"\t\t------------------------------------------------------------------"<<endl;
    cout<<"\t\tEnter Your choice With First Letter:";
    cin>>choice;
    cataglories ob;
    user_option ob2;
    switch(choice)
    {
        case 'c':
                ob.male();
                break;
        case 'p':
                //payment();
                cout<<"pok"<<endl;
                break;
        case 'u':
        case 'U':system("cls");
                 cout<<"\t\t\t\t\t\tplease confirm us you are user or admin!"<<endl;
                 cout<<"\t\t\t\t\t\tNotes:: Admin = a || User = u"<<endl;
                 char pp;
                 cout<<"\t\t\t\t\t\tEnter your choice:";
                 cin>>pp;
                 if(pp=='a')
                 {
                     system("cls");
                     ob2.admin();
                     ob2.back2();
                 }
                 if(pp=='u')
                 {
                     system("cls");
                     ob2.user();
                     ob2.back2();
                 }
        default:try
                 {
                     if(!(choice=='p'||choice=='u'||choice=='c'))
                     {
                         throw choice;
                     }
                 }
                 catch(char num)
                 {
                     system("cls");
                     cout<<"\t\t\t\t\t\tWarning!!! Your type digit is worng! Please try again"<<endl;
                     main();
                 }
    }

    getche();
}

void cataglories::male()

{
    int choice1,choice2;
    cataglories ob;
        system("cls");
        cout<<"\t\t\t\t\t\t---------------------------------"<<endl;
        cout<<"\t\t\t\t\t\t***Welcome To Visits our Shop***"<<endl;
        cout<<"\t\t\t\t\t\t---------------------------------"<<endl;
        cout<<"\t\t\t\t\t\t   1.Male 2.Female 3.Children   "<<endl;
        cout<<"\t\t\t\t\t\tEnter your type:";
        cin>>choice1;
        switch(choice1)
        {
           case 1:  cout<<"\t\t\t\t\t\t1.shirt\n\t\t\t\t\t\t2.punjabi\n\t\t\t\t\t\tEnter your choice:";
                    cin>>choice2;
                    if(choice2==1)
                    {
                       system("cls");
                       ob.shirt();
                       system("PAUSE");
                       ob.back();

                    }
                    if(choice2==2)
                    {
                       system("cls");
                       ob.pubjabi();
                       ob.back();
                    }
          case 2:   cout<<"under this construction"<<endl;
                    system("PAUSE");
                    ob.back();
          case 3:
                    cout<<"under this construction"<<endl;
                    system("PAUSE");
                    ob.back();
         default:try
                 {
                     if(!(choice2==1||choice2==2||choice2==3))
                     {
                         throw choice1;
                     }
                 }
                 catch(int num)
                 {
                     cout<<"\t\t\t\t\t\tWarning!!!Your type digit is worng! Please try again"<<endl;
                     system("PAUSE");
                     male();
                 }
        }

}

void cataglories::shirt()

{
            system("cls");
			cout << "\n\t\t\t\t\t\t -----------------------------------------------------------"<<endl;
			cout << "\t\t\t\t\t\t|                      Male Shirt - Menu                     |"<<endl;
			cout << "\t\t\t\t\t\t -----------------------------------------------------------"<<endl;
			cout << "\n\t\t\t\t\t\t ------------Set A----------\t ------------Set B----------"<<endl;
			cout << "\t\t\t\t\t\t| Cloth   : Arabian Fasion    |\t| Cloth   : Bengali Men     |"<<endl;
			cout << "\t\t\t\t\t\t| Product : Arabian           |\t| Product : RoyelLI         |"<<endl;
			cout << "\t\t\t\t\t\t| Price   : 550.00 Taka       |\t| Price   : 1000.00 Taka    |"<<endl;
			cout << "\t\t\t\t\t\t ---------------------------\t ---------------------------"<<endl;

			cout << "\n\t\t\t\t\t\t ------------Set C----------\t ------------Set D----------"<<endl;
			cout << "\t\t\t\t\t\t| Cloth   : Indian Sri        |\t| Cloth   : Italian Style   |"<<endl;
			cout << "\t\t\t\t\t\t| Product : Srigor            |\t| Product : Italian         |"<<endl;
			cout << "\t\t\t\t\t\t| Price   : 990.00 Taka       |\t| Price   : 1500.00 Taka    |"<<endl;
			cout << "\t\t\t\t\t\t ---------------------------\t ---------------------------"<<endl;


			cout<<"\t\t\t\t\t\tEnter your choice of set to buy:";
			char set;
			cin>>set;
            switch(set)
            {
                case 'a':   cout << "\n\t\t\t\t\t\t ------------Set A----------"<<endl;
                            cout << "\t\t\t\t\t\t| Cloth   : Arabian Fasion    |"<<endl;
                            cout << "\t\t\t\t\t\t| Product : Arabian           |"<<endl;
                            cout << "\t\t\t\t\t\t| Price   : 550.00 Taka       |"<<endl;
                            cout << "\t\t\t\t\t\t| Total Price: "<<(550.00*tax)<<" Taka     |"<<endl;
                            cout << "\t\t\t\t\t\t ---------------------------"<<endl;
                            break;

                case 'b':   cout << "\n\t\t\t\t\t\t ------------Set B----------"<<endl;
                            cout << "\t\t\t\t\t\t| Cloth   : Bengali Men       |"<<endl;
                            cout << "\t\t\t\t\t\t| Product : RoyelLI           |"<<endl;
                            cout << "\t\t\t\t\t\t| Price   : 1000.00 Taka      |"<<endl;
                            cout << "\t\t\t\t\t\t| Total Price: "<<(1000.00*tax)<<" Taka    |\n"<<endl;
                            cout << "\t\t\t\t\t\t ---------------------------"<<endl;
                            break;

                case 'c':   cout << "\n\t\t\t\t\t\t ------------Set C----------"<<endl;
                            cout << "\t\t\t\t\t\t| Cloth   : Indian Sri    |"<<endl;
                            cout << "\t\t\t\t\t\t| Product : Srigor           |"<<endl;
                            cout << "\t\t\t\t\t\t| Price   : 990.00 Taka      |"<<endl;
                            cout << "\t\t\t\t\t\t| Total Price: "<<(990.00*tax)<<" Taka     |\n"<<endl;
                            cout << "\t\t\t\t\t\t ---------------------------"<<endl;
                            break;

                case 'd':   cout << "\n\t\t\t\t\t\t ------------Set D----------"<<endl;
                            cout << "\t\t\t\t\t\t| Cloth   : Italian Style     |"<<endl;
                            cout << "\t\t\t\t\t\t| Product : Italian           |"<<endl;
                            cout << "\t\t\t\t\t\t| Price   : 1500.00 Taka      |"<<endl;
                            cout << "\t\t\t\t\t\t| Total Price: "<<(1500.00*tax)<<" Taka    |\n"<<endl;
                            break;
            }
    }

void cataglories::pubjabi()

{
            system("cls");
			cout << "\n\t\t\t\t\t\t -----------------------------------------------------------"<<endl;
			cout << "\t\t\t\t\t\t|                      Male Punjabi - Menu                    |"<<endl;
			cout << "\t\t\t\t\t\t -----------------------------------------------------------"<<endl;
			cout << "\n\t\t\t\t\t\t ------------Set A----------\t ------------Set B----------"<<endl;
			cout << "\t\t\t\t\t\t| Cloth   : Kasmir pubjabi    |\t| Cloth   : Bengali         |"<<endl;
			cout << "\t\t\t\t\t\t| Product : Kasmir            |\t| Product : RoyelLI         |"<<endl;
			cout << "\t\t\t\t\t\t| Price   : 550.00 Taka       |\t| Price   : 1000.00 Taka    |"<<endl;
			cout << "\t\t\t\t\t\t ---------------------------\t ---------------------------"<<endl;

			cout << "\n\t\t\t\t\t\t ------------Set C----------\t ------------Set D----------"<<endl;
			cout << "\t\t\t\t\t\t| Cloth   : Indian            |\t| Cloth   : Italian Punjabi |"<<endl;
			cout << "\t\t\t\t\t\t| Product : Srigor            |\t| Product : Italian         |"<<endl;
			cout << "\t\t\t\t\t\t| Price   : 990.00 Taka       |\t| Price   : 1500.00 Taka    |"<<endl;
			cout << "\t\t\t\t\t\t ---------------------------\t ---------------------------"<<endl;
			system("PAUSE");
}

void cataglories::back()

{
        char cc;
        cout<<"\t\t\t\t\t\tYou want to  back home or not(y/n):";
        cin>>cc;
        if(cc=='y')
        {
            system("cls");
            main();
        }
        if(cc=='n')
        {
            male();
        }
}

void user_option::back2()

{
        char cc;
        cout<<"\t\t\t\t\t\tYou want to  back home or not(y/n):";
        cin>>cc;
        if(cc=='y')
        {
            system("cls");
            main();
        }
        if(cc=='n')
        {
            admin();
        }
}

double cataglories::shirt_value()

{
    int m_c;
    switch(m_c)
    {
        case 'a':
        case 'A':
                  break;

        case 'b':
        case 'B':
                  break;

        case 'c':
        case 'C':
                  break;
        case 'd':
        case 'D':
                  break;
    }
}

int user_option::signup()

{
        ofstream input;
        input.open("signup.txt");
        cout<<"\t\t\t\t\t\tEnter your first name:";
        cin>>first_name;
        input<<first_name<<endl;

        cout<<"\t\t\t\t\t\tEnter your last name:";
        cin>>last_name;
        input<<last_name<<endl;
        cout<<"\t\t\t\t\t\tEnter your ID number:";
        cin>>id;
        input<<id<<endl;
        check_id=id;
        cout<<"\t\t\t\t\t\tEnter your Birth Date:";
        cin>>birth_date;
        input<<birth_date<<endl;
        cout<<"\t\t\t\t\t\tEnter your password:";
        cin>>password;
        input<<password<<endl;
        cin.ignore();
        input.close();
}

int user_option::signin()

{
            ifstream datashow;
            datashow.open("signup.txt");
            string checking;
            if(datashow.is_open())
            {
               while(getline(datashow,checking))
               {
                   cout<<"\t\t\t\t\t\t"<<checking<<endl;
               }
               //datashow.close();
            }
           else
            {
               cout<<"\t\t\t\t\t\tFile direction is missed"<<endl;
            }
}

void user_option::admin()

{
            signup();
            cout<<"\t\t\t\t\t\tYour Data is Stored......"<<endl;
            cout<<"\t\t\t\t\t\tIf you want to see your data,please type(y/n)";
            cin>>shamim;
            if(shamim=='y')
            {
                signin();
            }
            else
            {
                cout<<"\t\t\t\t\t\tWelcome to store your data!"<<endl;
            }

}
