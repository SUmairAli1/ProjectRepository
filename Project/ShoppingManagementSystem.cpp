#include<iostream>
#include<string>
#include<conio.h>
#include<windows.h>
#include<fstream>
#include"myfunc.cpp"
#include"login.cpp"
#include"menu.cpp"
#include"electronic.cpp"
#include"sports.cpp"
#include"vehicles.cpp"
#include"computer.cpp"
#include"watches.cpp"
#include"games.cpp"
void welcome();
void printing();
int main(){
	welcome();
	MainPage m1;
	menu mm1;
	m1.choices();
	system("Pause");
	clrscr();
	system("color 8b");
	gotoxy(45,0);
	cout<<"WELCOME TO ONLINE SHOPPING CENTRE\t\n";
	mm1.mainmenu();
	clrscr();
	if(mm1.choice==1){
	mm1.categories();
    }
    	if(mm1.choice==4||mm1.choice==3){
		exit(0);
	}
	else if(mm1.choice==2){
		write_product();
		prodmenu();
		exit(0);
	}
	clrscr();
	if(mm1.choice1==1){
		Car cr;
		cr.GetSellerDetails();
		cr.getCarDetails();
		cr.ShowSellerDetails();
		cr.showCarDetails();
	}
	else if(mm1.choice1==2){
	electronicitem et;
	et.categ();
	if(et.choice==4){
		order();
		printing();
		clrscr();
		gotoxy(35,0);
		cout<<"**************B I L L*************"<<endl;
		bill();
		exit(0);
	}
	    else if(et.choice==1){
	    corder();
		printing();
		clrscr();
		gotoxy(35,0);
		cout<<"**************B I L L*************"<<endl;
		cbill();
		exit(0);
	}
		else if(et.choice==2){
		worder();
		printing();
		clrscr();
		gotoxy(35,0);
		cout<<"**************B I L L*************"<<endl;
		wbill();
		exit(0);
	}
		else if(et.choice==3){
		gorder();
		printing();
		clrscr();
		gotoxy(35,0);
		cout<<"**************B I L L*************"<<endl;
		gbill();
		exit(0);
	}
	}
	else if(mm1.choice1==4){
	sport s1;
	s1.setdetails();
	if(s1.choice==1){
		cricket c1;
		c1.acc();
	}
	else if(s1.choice==2){
		football f1;
		f1.acc();
	}	
	else if(s1.choice==3){
		hockey h1;
		h1.acc();
	}
	}
	exit(0);
}
void welcome(){
	clrscr();
	system("color 37");
	printf("\n\t\t");
	gotoxy(35,2);
	cout<<"***********************************************"<<endl;
	gotoxy(35,3);
	printf("\n\t\t\t\t\t");
	gotoxy(35,4);
	cout<<"          SHOPPING MANAGEMENT SYSTEM           "<<endl;
	gotoxy(35,6);
	cout<<"         MADE BY UMAIR, TAHA & JAHANIA         "<<endl;
	gotoxy(35,8);
	cout<<"***********************************************"<<endl;
}
void printing()
{
     
     for(int x=0; x<=100; x++)
     {
        
     Sleep(50);
     gotoxy(26,8);
     //setcolor(782);
     cout<<"\tPlease Wait...";
     gotoxy(36,10);
     //setcolor(9);
     cout<<x<<"%";
        
  
     }
     
clrscr();
//setcolor(782);
gotoxy(26,8);
     cout<<"BILL GENERATED!!";
     gotoxy(36,10);
     cout<<"100%";
     
gotoxy(27,15);
cout<<"press any key to continue";
getch();
//setcolor(799);
}

