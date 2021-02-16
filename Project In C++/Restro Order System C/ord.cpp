//THIS PROJECT IS BROUGHT TO YOU BY CODE-PROJECTS//
//FOR MORE PROJECTS. LOG ON TO : www.code-projects.org//
#include <iostream>
#include <cctype>
#include <cstdlib>
#include <iomanip>


using namespace std;


int main()
{
char choice='Y';

int order = 1;

int num1=0, num2=0, num3=0, num4=0, num5=0;
int num_customers;
int sentinel=0;
const double UnitPrice1= 6.95, UnitPrice2= 5.75,UnitPrice3= 7.25, UnitPrice4= 8.95, UnitPrice5= 4.95;
double AmountofSale1=0, AmountofSale2=0, AmountofSale3=0, AmountofSale4=0, AmountofSale5=0;


cout<<":::::::::::::::::::MENU:::::::::::::::::::\n\n"
     <<"\n Item[1] Buffalo Wings		    $6.95 <===\n"
     <<"\n Item[2] Ham Burger  		    $5.75 <===\n"
	 <<"\n Item[3] Italian Sandwich	    $7.25 <===\n"
	 <<"\n Item[4] Shrimp Nuggets		    $8.95 <===\n"
	 <<"\n Item[5] Veggie Supreme		    $4.95 <===\n";
	 

         
         
while (order != sentinel)
{
cout<<"\nFrom The List Of Food Items, What Would You Like?:\n";
cin>>order;
switch(order)
			{
                
                case 0:
                break;
                
				case 1:
                     
                cout<<"\nHow Many Buffalo Wings Would You Like To Order:\n";
                               cin>>num1;
                
                AmountofSale1 = UnitPrice1 * num1;
                break;
                
                
          
                 
				case 2: 
                cout<<"\nHow Many Ham Burgers Would You Like To Order:\n";
				               cin>>num2;
               
                AmountofSale2= UnitPrice2 * num2;
                break;
                
                
                case 3: 
                cout<<"\nHow Many Italian Sandwiches Would You Like To Order:\n";
                                  cin>>num3;
                
                AmountofSale3= UnitPrice3 * num3;
                break;
                
                
                 
                case 4: 
                cout<<"\nHow Many Shrimp Nuggets Would You Like To Order:\n";
                                cin>>num4;
                
                AmountofSale4= UnitPrice4 * num4;
                break;
                
                
                
                case 5: 
                cout<<"\nHow Many Would Veggie Supremes You Like To Order:\n";
                                cin>>num5;
                                
                
                AmountofSale5= UnitPrice5 * num5; 
                break;
                
                
                default: cout<<"Please Choose A Valid Item From Our List\n";
                }
                

{       

cout<<"You Have Ordered:\n\n";
cout<<"===========================================================\n";

cout<<left<<setw(15)<<"ITEM"<<right<<setw(10)<<"QUANTITY"<<right<<setw(15)<<"UNIT PRICE"<<right<<setw(20)<<"AMOUNT OF SALE\n";

cout<<"===========================================================";

cout<<"\nBuffalo Wings:\t"<<setw(6)<<left<< num1 <<setw(16)<<right<< UnitPrice1 <<setw(20) <<right<< AmountofSale1<<endl;

cout<<"\nHam Burger:\t"<<setw(6)<<left<< num2 <<setw(16)<<right<< UnitPrice2 <<setw(20) <<right<< AmountofSale2<<endl<<endl;

cout<<"Italian Sandwich:"<<setw(6)<<left<< num3 <<setw(15)<<right<< UnitPrice3 <<setw(20) <<right<< AmountofSale3<<endl<<endl;

cout<<"Shrimp Nuggets:\t"<<setw(6)<<left<< num4 <<setw(16)<<right<< UnitPrice4 <<setw(20) <<right<< AmountofSale4<<endl<<endl;

cout<<"Veggie Supreme:\t"<<setw(6)<<left<< num5 <<setw(16)<<right<< UnitPrice5 <<setw(20) <<right<< AmountofSale5<<endl<<endl;
}
              }

system("PAUSE");
return 0;
}
