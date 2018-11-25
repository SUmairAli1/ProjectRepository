#include<iostream>
#include<string.h>
#include<windows.h>
#include<conio.h>
#include<fstream>
using namespace std;
class computer{
	protected:
	int pdtcode;
    char name[50];
    char model[50];
    float price;
	float discount;
    string prod;
    public:
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
fstream cp;
computer c1;
void cmenu(){
    	clrscr();
    	cout<<"\n\n\t\tPRODUCT MENU\n\n";
    	cout<<"P.NO.\tNAME\t\tPRICE\n";
    	cp.open("COMPUTER.dat",ios::in);
    	while(cp.read((char*)&c1,sizeof(computer))){
    		cout<<c1.retcode()<<"\t\t"<<c1.retname()<<"\t\t"<<c1.retprice()<<endl;
		}
		cp.close();
	}
	int codr[50],cqty[50],co=0;
		float camt,cdamt,ctotal=0;
	void corder(){
		char ch;
		cmenu();
		cout<<"PLACE YOU ORDER";
		do{
		cout<<"Enter the product number: ";
		cin>>codr[co];
		cout<<"\nQuantity: ";
		cin>>cqty[co];
		co++;
		cout<<"\nDo you want to order another product(Y/N)?";
		cin>>ch;
	    } while(ch=='y'||ch=='Y');
	    cout<<"THANK YOU! FOR PLACING THE ORDER"<<endl;
	    clrscr();
}
	    void cbill(){
	    cout<<"\nPr.No.\t\tPr.Name\t\tQuantity\t\tPrice\t\tAmount\n";
	    for(int x=0;x<=co;x++){
	    	cp.open("COMPUTER.dat",ios::in);
	    	cp.read((char*)&c1,sizeof(computer));
	    	while(!cp.eof()){
	    		if(c1.retcode()==codr[x]){
	    			camt=c1.retprice()*cqty[x];
	    			cout<<"\n"<<codr[x]<<"\t"<<c1.retname()<<"\t"<<cqty[x]<<"\t\t"<<c1.retprice()<<"\t"<<camt;
	    			ctotal+=camt;
				}
				cp.read((char*)&c1,sizeof(computer));
			}
			cp.close();
		}
		cout<<"\n\n\t\t\t\t\tTOTAL= "<<ctotal;
	}
