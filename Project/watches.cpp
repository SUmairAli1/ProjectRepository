#include<iostream>
#include<string.h>
#include<windows.h>
#include<conio.h>
#include<fstream>
using namespace std;
class watches{
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
fstream wp;
watches w1;
void wmenu(){
    	clrscr();
    	cout<<"\n\n\t\tPRODUCT MENU\n\n";
    	cout<<"P.NO.\tNAME\t\tPRICE\n";
    	wp.open("WATCHES.dat",ios::in);
    	while(wp.read((char*)&w1,sizeof(watches))){
    		cout<<w1.retcode()<<"\t\t"<<w1.retname()<<"\t\t"<<w1.retprice()<<endl;
		}
		wp.close();
	}
	int wodr[50],wqty[50],w=0;
		float wamt,wdamt,wtotal=0;
	void worder(){
		char ch;
		wmenu();
		cout<<"PLACE YOU ORDER";
		do{
		cout<<"Enter the product number: ";
		cin>>wodr[w];
		cout<<"\nQuantity: ";
		cin>>wqty[w];
		w++;
		cout<<"\nDo you want to order another product(Y/N)?";
		cin>>ch;
	    } while(ch=='y'||ch=='Y');
	    cout<<"THANK YOU! FOR PLACING THE ORDER"<<endl;
	    clrscr();
}
	    void wbill(){
	    cout<<"\nPr.No.\t\tPr.Name\t\tQuantity\t\tPrice\t\tAmount\t\tAmount after discount\n";
	    for(int x=0;x<=w;x++){
	    	wp.open("WATCHES.dat",ios::in);
	    	wp.read((char*)&w1,sizeof(watches));
	    	while(!wp.eof()){
	    		if(w1.retcode()==wodr[x]){
	    			wamt=w1.retprice()*wqty[x];
	    			cout<<"\n"<<wodr[x]<<"\t"<<w1.retname()<<"\t"<<wqty[x]<<"\t\t"<<w1.retprice()<<"\t"<<wamt;
	    			wtotal+=wamt;
				}
				wp.read((char*)&w1,sizeof(watches));
			}
			wp.close();
		}
		cout<<"\n\n\t\t\t\t\tTOTAL= "<<wtotal;
	}
