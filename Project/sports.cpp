#include<iostream>
#include<conio.h>
#include<windows.h>
#include<stdio.h>
void back();
void ychoice();
using namespace std;
class sport{
	
	protected:
		int quan,c;
		string add,item;
		float total;
		public:
			int choice;
			int setdetails(){
			cout<<"Sports choice";
			Sleep(300);
			cout<<"\n1)cricket\n";
			Sleep(300);
			cout<<"2)football\n";
			Sleep(300);
			cout<<"3)hockey\n";					
			c=getdetails();
			//friend void ychoice(){}		
			return c;
	}
			 int getdetails(){
			 	Sleep(400);
				cout<<"your choice? ";
				cin>>choice;
				return choice;
			}
		
/*void ychoice(){
		if(choice<=3)	
		{
		if(choice==1)
					{
						cout<<"\nCRICKET";
					//	cricket();
					}
		if(choice==2){
			cout<<"\nFoot ball";
		//	football();
		}
		if(choice==3){
			cout<<"\nHockey";	
		}}
		
		else if(choice){
			cout<<"wrong choice";
		}}*/
		void back(){
	string add;
			Sleep(400);
			cout<<"\nDo yo want to add more or go back? ";
			cin>>add;
			
			if(add=="more")
			{
				system("cls");
				setdetails();
			}
			if(add=="back"){
				system("cls");
				setdetails();
			}
		}
};
class cricket :public sport
{
	private:
	int p,i,amt,q[4]={2500,2000,1500,6500};

    public:
	void acc()	
	{
	
	cout<<"\n\nCricket Accessories\n";
	cout<<"\n1. Cricket kit   Pkr 2500";
	cout<<"\n2. Bat and Ball  Pkr 2000";
	cout<<"\n3. Sports Shoes  Pkr 1500";
	cout<<"\n4. Total  Kit    Pkr 6500";
    cout<<"\nYour choice:     ";
    cin>>p;
    amount(p);
    back();
    }
    void amount(int p)
    {
    	if(p==1)
    	{
    		amt=q[0];
    		cout<<"\namount= \n"<<amt;
		}
		if(p==2)
		{
			amt=q[1];
			cout<<"\namount= \n"<<amt;
		}
		if(p==3)
		{
			amt=q[2];
			cout<<"\namount= \n"<<amt;
		}
		if(p==4)
		{
			amt=q[3];
			cout<<"\namount= \n"<<amt;
		}
		else if(p>=4)
		{
			cout<<"Invalid Enter";
			cout<<"Do you want to re-enter? ";
			cin>>p;
		}}
	void back(){
		sport::back();
	
		}
};
class football :public sport
{
	private:
	int p,i,amt,q[4]={3000,2000,1500,5500};

    public:
	void acc()	
	{
	
	cout<<"\n\nFootball Accessories\n";
	cout<<"\n1. Football kit   Pkr 3000";
	cout<<"\n2. Foot Ball      Pkr 2000";
	cout<<"\n3. Sports Shoes   Pkr 1500";
	cout<<"\n4. Total  Kit     Pkr 5500";
    cout<<"\nYour choice:     ";
    cin>>p;
    amount(p);
    back();
    }
    void amount(int p)
    {
    	if(p==1)
    	{
    		amt=q[0];
    		cout<<"\namount= \n"<<amt;
		}
		if(p==2)
		{
			amt=q[1];
			cout<<"\namount= \n"<<amt;
		}
		if(p==3)
		{
			amt=q[2];
			cout<<"\namount= \n"<<amt;
		}
		if(p==4)
		{
			amt=q[3];
			cout<<"\namount= \n"<<amt;
		}
		else if(p>=4)
		{
			cout<<"Invalid Enter";
			cout<<"Do you want to re-enter? ";
			cin>>p;
		}}
	void back(){
		sport::back();
	
		}
};
class hockey :public sport
{
	private:
	int p,i,amt,q[4]={2000,3000,1500,5500};

    public:
	void acc()	
	{
	
	cout<<"\n\n Hockey Accessories\n";
	cout<<"\n1. Hockey kit           Pkr 2000";
	cout<<"\n2. Hockey and Ball      Pkr 3000";
	cout<<"\n3. Sports Shoes         Pkr 1500";
	cout<<"\n4. Total  Kit           Pkr 5500";
    cout<<"\nYour choice:     ";
    cin>>p;
    amount(p);
    back();

}
    void amount(int p)
    {
    	if(p==1)
    	{
    		amt=q[0];
    		cout<<"\namount= \n"<<amt;
		}
		if(p==2)
		{
			amt=q[1];
			cout<<"\namount= \n"<<amt;
		}
		if(p==3)
		{
			amt=q[2];
			cout<<"\namount= \n"<<amt;
		}
		if(p==4)
		{
			amt=q[3];
			cout<<"\namount= \n"<<amt;
		}
		else if(p>=4)
		{
			cout<<"Invalid Enter";
			cout<<"Do you want to re-enter? ";
			cin>>p;
		}}
	void back(){
		sport::back();
	
		}
};

/*int main(){
	sport s;
	cricket c;
	football f;
	hockey h;
int choice;
	choice=s.setdetails();
  */ 
   
   //choice=s.setdetails();
   // s.ychoice();
//	s.filing();
   
		/*	if(choice==2)
			{
				//football();
			}*/
//	s.ychoice();
        /* if(choice==1)
			{
				c.acc();
			}
			if(choice==2)
			{
				f.acc();
			}
	     if(choice==3)
	     {
	     	h.acc();
	    
		 }*/

