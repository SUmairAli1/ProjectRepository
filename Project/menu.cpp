#include<iostream>
#include<string>
#include<windows.h>
#include<fstream>
using namespace std;
class menu{
	protected:
	int pdtcode;
    char name[50];
    char model[50];
    float price;
	float discount;
    string prod;
	public:
		int choice,choice1;
		void choices(){
			cout<<"Enter your choice: ";
			cin>>choice;
		}
		void choices1(){
			cout<<"Enter your choice: ";
			cin>>choice1;
		}
		
		void mainmenu(){
	gotoxy(50,2);
	cout<<"M A I N - M E N U";
	gotoxy(45,4);
	cout<<"1. Add to cart / Buy";
	gotoxy(45,6);
	cout<<"2. Post an add / Sell";
	gotoxy(45,8);
	cout<<"3. HELP";
	gotoxy(45,10);
	cout<<"4. EXIT\n";
	choices();
}
    void categories(){
    	gotoxy(35,0);
	    cout<<"***********************************************"<<endl;
    	gotoxy(35,1);
    	cout<<"SELECT THE CATEGORY";
    	gotoxy(35,3);
    	cout<<"1. Vehicles ";
    	gotoxy(35,5);
    	cout<<"2. ELECTRONICS ";
    	gotoxy(35,7);
    	cout<<"3. CLOTHING ";
    	gotoxy(35,9);
    	cout<<"4. SPORTS ";
    	gotoxy(35,11);
    	cout<<"5. OTHERS ";
    	gotoxy(35,13);
	    cout<<"***********************************************"<<endl;
	    choices1();
}
void getdata(){
	gotoxy(35,0);
	cout<<"*****ADD YOUR PRODUCT DETAILS*****\n";
        cout<<"Enter the name of Product: ";
        cin>>name;
        cout<<"Enter the product code: ";
        cin>>pdtcode;
        cout<<"Enter the model: ";
        cin>>model;
        cout<<"Enter the price : ";
        cin>>price;
        //discountt();
    }
string retname(){
    	return name;
	}
	
    int retcode(){
    	return pdtcode;
	}
	
    float retprice(){
    	return price;
	}
};
menu p1;
fstream fp;
void prodmenu(){
    	clrscr();
    	cout<<"\n\n\t\tADD/POST DETAILS\n\n";
    	cout<<"P.NO.\tNAME\t\tPRICE\n";
    	fp.open("SHOP.dat",ios::in);
    	while(fp.read((char*)&p1,sizeof(menu))){
    		cout<<p1.retcode()<<"\t\t"<<p1.retname()<<"\t\t"<<p1.retprice()<<endl;
		}
		fp.close();
	}
	void write_product(){
		fp.open("SHOP.dat",ios::out|ios::app);
		p1.getdata();
		fp.write((char*)&p1,sizeof(menu));
		fp.close();
	}
