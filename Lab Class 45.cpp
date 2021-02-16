/// File Read & Write

#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    char data[100];
    ofstream outfile;
    outfile.open("xfile.txt");

    cout<<"Writing to the file"<<endl;
    cout<<"Enter your Name : ";
    cin.getline(data,100);

    outfile<<data<<endl;

    cout<<"Enter your age :";
    cin>>data;
    cin.ignore();

    outfile<<data<<endl;

    outfile.close();

    ifstream infile;
    infile.open("xfile.txt");

    cout<<"Reading from the file"<<endl;
    infile>>data;

    cout<<data<<endl;

    infile>>data;
    cout<<data<<endl;

    infile.close();

    return 0;
}
