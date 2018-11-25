#include<iostream>
#include<string>
#include<fstream>
#include<windows.h>
#include<stdlib.h>
using namespace std;
class MainPage{
	string username, password, un, pw;
	int choice;
	public:
		void Login(){
			cout<<"Enter the username: ";
			cin>>username;
			password=getpass("Enter the password: ",true);
		ifstream read;
		read.open("Login.txt",ios::out);
		getline(read,un);
		getline(read,pw);
		if(un == username && pw ==password){
			cout<<"SUCCESSFULLY LOGGED IN!!"<<endl;
		}
		else
		{
			cout<<"LOGIN FAILED!!"<<endl;
			exit(0);
		}
	}
        void choices(){
        	gotoxy(35,12);
        	cout<<"==============================================="<<endl;
        	gotoxy(35,13);
        	cout<<"1: Login";
        	gotoxy(35,14);
			cout<<"2: Register";
			gotoxy(35,15);
			cout<<"==============================================="<<endl;
        	gotoxy(35,16);
        	cout<<"Enter your choice: ";
        	cin>>choice;
        	if(choice==1){
        		Login();
			}
			else if(choice==2){
				cout<<"Select the username: ";
				cin>>username;
				password=getpass("Select the password: ",true);
				ofstream write;
			write.open("Login.txt",ios::in);
			write<<username<<endl<<password;
			write.close();
		}	    
			}
		string getpass(const char *prompt, bool show_asterisk=true) // Getting The Pasword in Asterik form
{
  const char BACKSPACE=8;
  const char RETURN=13;

  string password;
  unsigned char ch=0;

  cout <<prompt; //Inputting the Password

  DWORD con_mode;
  DWORD dwRead;

  HANDLE hIn=GetStdHandle(STD_INPUT_HANDLE);

  GetConsoleMode( hIn, &con_mode );
  SetConsoleMode( hIn, con_mode & ~(ENABLE_ECHO_INPUT | ENABLE_LINE_INPUT) );

  while(ReadConsoleA( hIn, &ch, 1, &dwRead, NULL) && ch !=RETURN)
    {
       if(ch==BACKSPACE)
         {
            if(password.length()!=0)
              {
                 if(show_asterisk)
                     cout <<"\b \b";
                 password.resize(password.length()-1);
              }
         }
       else
{
             password+=ch;
             if(show_asterisk)
                 cout <<'*';
         }
    }
  cout <<endl;
  return password; //Returning the password
}	
};

