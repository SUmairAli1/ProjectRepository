#include<iostream>
#include<string.h>
#include<windows.h>
#include<conio.h>
#include<fstream>
using namespace std;
class games{
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
fstream gp;
games g1;
void gmenu(){
    	clrscr();
    	cout<<"\n\n\t\tPRODUCT MENU\n\n";
    	cout<<"P.NO.\tNAME\t\tPRICE\n";
    	gp.open("GAMES.dat",ios::in);
    	while(gp.read((char*)&g1,sizeof(games))){
    		cout<<g1.retcode()<<"\t\t"<<g1.retname()<<"\t\t"<<g1.retprice()<<endl;
		}
		gp.close();
	}
	int godr[50],gqty[50],g=0;
		float gamt,gdamt,gtotal=0;
	void gorder(){
		char ch;
		gmenu();
		cout<<"PLACE YOU ORDER";
		do{
		cout<<"Enter the product number: ";
		cin>>godr[g];
		cout<<"\nQuantity: ";
		cin>>gqty[g];
		g++;
		cout<<"\nDo you want to order another product(Y/N)?";
		cin>>ch;
	    } while(ch=='y'||ch=='Y');
	    cout<<"THANK YOU! FOR PLACING THE ORDER"<<endl;
	    clrscr();
}
	    void gbill(){
	    cout<<"\nPr.No.\t\tPr.Name\t\tQuantity\t\tPrice\t\tAmount\t\tAmount after discount\n";
	    for(int x=0;x<=g;x++){
	    	gp.open("GAMES.dat",ios::in);
	    	gp.read((char*)&g1,sizeof(games));
	    	while(!gp.eof()){
	    		if(g1.retcode()==godr[x]){
	    			gamt=g1.retprice()*gqty[x];
	    			cout<<"\n"<<godr[x]<<"\t"<<g1.retname()<<"\t"<<gqty[x]<<"\t\t"<<g1.retprice()<<"\t"<<gamt;
	    			gtotal+=gamt;
				}
				gp.read((char*)&g1,sizeof(games));
			}
			gp.close();
		}
		cout<<"\n\n\t\t\t\t\tTOTAL= "<<gtotal;
	}
