#include<iostream>
#include<string.h>
#include<windows.h>
#include<conio.h>
#include<fstream>
using namespace std;
class electronicitem{
	protected:
	int pdtcode;
    char name[50];
    char model[50];
    float price;
	float discount;
    string prod;
	public:
	int choice;
	void choices(){
		cout<<"Enter your choice: ";
		cin>>choice;
	}
	void categ(){
    	gotoxy(35,0);
	    cout<<"***********************************************"<<endl;
    	gotoxy(35,1);
    	cout<<"SELECT THE CATEGORY";
    	gotoxy(35,3);
    	cout<<"1. Computers & Laptops ";
    	gotoxy(35,5);
    	cout<<"2. Watches & Gadgets ";
    	gotoxy(35,7);
    	cout<<"3. Cameras & Accessories ";
    	gotoxy(35,9);
    	cout<<"4. Others ";
    	gotoxy(35,11);
	    cout<<"***********************************************"<<endl;
	    choices();
	}
    void discountt(){
        if(price >= 2000.00 && price < 5000.00){
        discount = 0.05*price;
        }
        if (price >= 5000.00 && price < 10000.00){
        discount = 0.10*price;
        }
        if (price >= 10000.00){
        discount = 0.20*price;
        }
        else{
        discount = 0.00;
        }
        cout<<"Discount: "<<discount;
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
fstream fpp;
electronicitem e1;
void productmenu(){
    	clrscr();
    	cout<<"\n\n\t\tPRODUCT MENU\n\n";
    	cout<<"P.NO.\tNAME\t\tPRICE\n";
    	fpp.open("SHOP.dat",ios::in);
    	while(fpp.read((char*)&e1,sizeof(electronicitem))){
    		cout<<e1.retcode()<<"\t\t"<<e1.retname()<<"\t\t"<<e1.retprice()<<endl;
		}
		fpp.close();
	}
	int odr[50],qty[50],c=0;
		float amt,damt,total=0;
	void order(){
		char ch;
		productmenu();
		cout<<"PLACE YOU ORDER"<<endl;
		do{
		cout<<"Enter the product number: ";
		cin>>odr[c];
		cout<<"\nQuantity: ";
		cin>>qty[c];
		c++;
		cout<<"\nDo you want to order another product(Y/N)?";
		cin>>ch;
	    } while(ch=='y'||ch=='Y');
	    cout<<"THANK YOU! FOR PLACING THE ORDER"<<endl;
	    clrscr();
}
	    void bill(){
	    cout<<"\nPr.No.\t\tPr.Name\t\tQuantity\t\tPrice\t\tAmount\t\tAmount after discount\n";
	    for(int x=0;x<=c;x++){
	    	fpp.open("SHOP.dat",ios::in);
	    	fpp.read((char*)&e1,sizeof(electronicitem));
	    	while(!fpp.eof()){
	    		if(e1.retcode()==odr[x]){
	    			amt=e1.retprice()*qty[x];
	    			cout<<"\n"<<odr[x]<<"\t"<<e1.retname()<<"\t"<<qty[x]<<"\t\t"<<e1.retprice()<<"\t"<<amt<<"\t\t"<<damt;
	    			total+=amt;
				}
				fpp.read((char*)&e1,sizeof(electronicitem));
			}
			fpp.close();
		}
		cout<<"\n\n\t\t\t\t\tTOTAL= "<<total;
	}
