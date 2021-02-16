/********************************************************************************************

THIS PROJECT IS BROUGHT TO YOU BY     " CODE-PROJECTS"   www.code-projects.org
					
********************************************************************************************/
#include <iostream>
#include <stdlib.h>
#include <string>
#include <fstream>
#include <ctime>
#include <sys/types.h>
#include <sys/stat.h>
#include <cerrno>
using namespace std;


int main () {
	
	/* Display the title of the program */

	system("color 0");
	cout<<"\n\n";
	cout<<"  [][][] [][][] []     [][][]\n";
	cout<<"  []       []   []     []\n";
	cout<<"  [][]     []   []     [][]\n";
	cout<<"  []       []   []     [] \n";
	cout<<"  []     [][][] [][][] [][][]\n\n";
	cout<<"  []    []   []   []]  [] [] [][][] []  [] []      []   [][][] [] [][][] []]  []\n";
	cout<<"  []}[]{[] []  [] [][] [] [] []  [] []  [] []    []  []   []   [] []  [] [][] []\n";
	cout<<"  [] [] [] [][][] [] [][] [] [][][] []  [] []    [][][]   []   [] []  [] [] [][]\n";
	cout<<"  []    [] []  [] []  []] [] []     []  [] []    []  []   []   [] []  [] []  []]\n";
	cout<<"  []    [] []  [] []   [] [] []     [][][] [][[] []  []   []   [] [][][] []   []\n\n";

	cout<<"\n\n\t\t      Brought To You by: CODE-PROJECTS \n\n\n\n\n\n\n";
	system("pause");
	system("cls");
	
		/* Display the MENU */
		
     string option;
     system("color 0");
	 menu:
	 cout << endl;
	 cout << "          wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww" << endl;
     cout << "          x   SIMPLE  FILE  MANIPULATION    x" << endl;
     cout << "          wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww" << endl;
     cout << "          x [1] - Save to a file            x" << endl;
     cout << "          x [2] - View file content         x" << endl;
     cout << "          x [3] - Obtain file size          x" << endl;
     cout << "          x [4] - File Details              x" << endl;
     cout << "          x [5] - Clear the file            x" << endl;
     cout << "          x [6] - Delete the file           x" << endl;
     cout << "          x [7] - Exit Program              x" << endl;
     cout << "          wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww" << endl;
     cout << "\n          Enter Your Choice:	";
     getline(cin,option);
     
     
     if (option == "1") {
     	
       system("cls");
       system("color 0");
       string textToSave;
       cout << "        wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww" << endl;
       cout << "        w  ENTER THE STRING YOU WANT TO SAVE   x\n" ;	//save a string
       cout << "        wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww\n\n" << endl;
       cout << "        HERE: ";
       getline(cin,textToSave);
       ofstream saveFile ("file.txt");
       saveFile << textToSave;
       cout << "" << endl<< endl<< endl<< endl<< endl<< endl; 
       saveFile.close(); 
       
       system("pause");
 		system("cls");
 					
		goto menu;
     }
     
     if(option == "2") {
     	  system("color 0");
     	  system("cls");
          ifstream loadFile;
          loadFile.open ("file.txt", ifstream::in);					//View file content 
          cout << "        wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww" << endl;
          cout << "        x     THE FILE CONTAINS THE STRING     x\n" ;	
          cout << "        wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww\n\n" << endl;
          cout << "        ";
          while (loadFile.good()){
               cout << (char) loadFile.get();
          }
          cout << "" << endl<< endl<< endl<< endl<< endl<< endl; 
    	  loadFile.close();
    	  
    	  system("pause");
 		system("cls");
 					
		goto menu;
     }
     
      if (option == "3") {
     	
     	system("cls");
     	system("color f");
        streampos begin,end;
  		ifstream myfile ("file.txt", ios::binary);							//Obtain file size
 		begin = myfile.tellg();
  		myfile.seekg (0, ios::end);
  		end = myfile.tellg();
 		myfile.close();
 		cout << "        wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww" << endl;
        cout << "        x            THE FILE SIZE IS          x\n" ;
        cout << "        wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww\n\n" << endl;
        cout << "\n\n\n\t\t\t";
  		cout << (end-begin) << " bytes.\n";
		cout << "" << endl<< endl<< endl<< endl<< endl;    
  		
  		system("pause");
 		system("cls");
 					
		goto menu;
     }
     
      if (option == "4") {
     	
     	system("cls");
        int argc; 
		char** argv ;
   		struct stat fileInfo;

   		if (stat("file.txt", &fileInfo) != 0) {  // Use stat( ) to get the info
   		  system("color 04");
   		  cout << "\n\n\n\n\n\n\n";
	   	  cout << "        wwwwwwwwwwwwwwwwww" << endl;
          cout << "        x      ERROR     x\n" ;	
          cout << "        wwwwwwwwwwwwwwwwww\n\n" << endl;
          cout << "        ";
	      std::cerr << strerror(errno) << '\n';
	      cout << "\n\n\n\n\n\n\n";
	      return 0;
   		}

		system("color 0");
		cout << "     wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww" << endl;
   		cout << "     x  Size               : " << fileInfo.st_size <<"  bytes"<<'\n';     // Size in bytes
   		cout << "     x  Drive letter saved : " << (char)(fileInfo.st_dev + 'A') << '\n';  // Device number
   		cout << "     x  Created            : " << std::ctime(&fileInfo.st_ctime);         // Creation time
   		cout << "     x  Modified           : " << std::ctime(&fileInfo.st_mtime);         // Last mod time
   		cout << "     wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww" << endl;
  		cout << "\n\n\n";
  		system("pause");
 		system("cls");
 					
		goto menu;
     }
     
     if (option == "5") {
     	system("color 0");
     	system("cls");
 		std::ofstream ofs ("file.txt", std::ios::out | std::ios::trunc); // clear contents of the file
		cout << "\n\n\n\n"; 
 		cout << "        wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww" << endl;
        cout << "        x      FILE SUCCESSFULLY CLEARED       x\n" ;	
        cout << "        wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww\n\n" << endl;
 		
 		system("pause");
 		system("cls");
 					
		goto menu;
     }
     
     if (option == "6") {
     	system("color 0");
     	system("cls");
    	std::remove("file.txt"); 									//Delete the file 
    	cout << "\n\n\n\n"; 
 		cout << "        wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww" << endl;
        cout << "        x      FILE SUCCESSFULLY REMOVED       x\n" ;	
        cout << "        wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww\n\n" << endl;
 		
 		system("pause");
 		system("cls");
 					
		goto menu;
     }
     
     if (option == "7") {
     	system("color 0");
     	system("cls");
 			cout<<"\n\n";
			cout<<"[][][] [][][] [][][] [][][] [][][]    []    []    []\n";	
			cout<<"[]  [] []  [] []  [] []     []  []  []  []  [][][][]\n";
			cout<<"[][][] [][][] []  [] [] []  [][][] [][][][] [] [] []\n";
			cout<<"[]     [] []  []  [] []  [] [] []  []    [] []    []\n";
			cout<<"[]     []  [] [][][] [][][] []  [] []    [] []    []\n\n";
			cout<<"[][][] [][][]     [][][] []     [][][] [][][] [][][] []   [] [][][]\n";	
			cout<<"  []   []         []  [] []     []  [] []       []   []]  [] []\n";
			cout<<"  []   [][][]     []     []     []  [] [][][]   []   [][] [] [] []\n";
			cout<<"  []       []     []  [] []     []  []     []   []   [] [][] []  []\n";
			cout<<"[][][] [][][]     [][][] [][][] [][][] [][][] [][][] []  [[] [][][]\n\n";
			cout<<"[][][]  []     [] [][][]   [] [] []\n";	
			cout<<"[]   []  []  []   []       [] [] []\n";
			cout<<"[]  []     []     [][][]   [] [] []\n";
			cout<<"[]   []    []     []\n";
			cout<<"[][][]     []     [][][]   [] [] []\n\n";
 		
 		system("pause");
 		return 0;
     }
     
     else;
     system("cls");
			cout<<"\n\n\n\n\n\n";
			cout<<"\t\t\t[][][] [][][] [][][] [][][] [][][]\n";
			cout<<"\t\t\t[]     []  [] []  [] []  [] []  []\n";
			cout<<"\t\t\t[][][] [][][] [][][] []  [] [][][]\n";
			cout<<"\t\t\t[]     [] []  [] []  []  [] [] []\n";
			cout<<"\t\t\t[][][] []  [] []  [] [][][] []  []\n\n";
				
			cout<<"\t\t\tPlease input a valid number.\n";
			cout<<"\t\t\tPress any key to go back to the Menu.\n\n\n\n\n\n\n";
				
			system("pause");
			system("cls");
			goto menu;
			
     
     system("pause");
	 return 0;
}
