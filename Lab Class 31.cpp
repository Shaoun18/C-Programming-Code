/// File Create

#include<fstream>
#include<iostream>
using namespace std;

int main()
{
    char data [100];
    int mid,test;
    float total;
    ofstream outfile;
    outfile.open("afile.txt");
    cout<<"Writing to the file" << endl;

    cout<< "Enter your name: ";
    cin.getline(data,100);
    outfile<<data<<endl;

    cout<< "Enter your Dept: ";
    cin.getline(data,100);
    outfile<<data<<endl;

    cout<<"Enter your Id Number:";
    cin>>data;
    outfile<<data <<endl;

    cout<< "Enter your Class test marks: ";
    cin>>test;
    outfile<<test<<endl;

    cout<< "Enter your Mid marks: ";
    cin>>mid;
    outfile<<mid<<endl;

    ifstream infile;
    infile.open("afile.txt");
    cout<<"Reading from the file"<<endl;
    infile>>data;
    cout<<data<<endl;

    infile>>data;
    cout<<data<<endl;

    infile>>data;
    cout<<data<<endl;

    infile>>data;
    cout<<data<<endl;

    infile>>data;
    cout<<data<<endl;

    infile>>test;
    total = test;
    infile >> mid;
    total = total + mid;
    cout<<total<<endl;

    outfile<<total<<endl;

    outfile.close();

    infile.close();
    return 0;
}
