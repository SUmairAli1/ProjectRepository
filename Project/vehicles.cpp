#include <stdio.h>
#include <iostream>

using namespace std;


class RandomSeller
{
	protected:
		string SellerName;
		int ContactNo;
		string SellerEmail;
	
	public:
		void EnterSellerDetails()
		{
			cout<<"Enter the Following Details of Seller "<<endl;
			cout<<"\nName          : ";
			cin>>SellerName;
			cout<<"\nContact No    : ";
			cin>>ContactNo;
			cout<<"\nEmail Address : ";
			cin>>SellerEmail;		
		}	
		
		void ShowSellerDetails()
		{
			cout<<"\n\t\tSeller Details\n\n";
			cout<<"Name    : "<<SellerName<<endl;
			cout<<"Mobile  : "<<ContactNo<<endl;
			cout<<"Email   :"<<SellerEmail<<endl;
				
			
		}
	
	
};

class Vehicles
{
	protected:
		string brand;
		string model;
		int year;
		int mileage;
		string registrationCity;
		string fuel;
		string ExtraDetails;
		int EngineCC;
		int Price;
		
	public:
		 void getCarDetails()
		 {
		 	cout<<"Enter Following Details of Car"<<endl;
		 	cout<<"\n\nPrice : ";
		 	cin>>Price;
		 	cout<<"\nBrand : ";
		 	cin>>brand;
		 	cout<<"\nModel : ";
		 	cin>>model;
		 	cout<<"\nYear  : ";
		 	cin>>year;
		 	cout<<"\nMileage : ";
		 	cin>>mileage;
		 	cout<<"\nRegistration City : ";
		 	cin>>registrationCity;
		 	cout<<"\nFuel  : ";
		 	cin>>fuel;
		 	cout<<"\nEngine CC : ";
		 	cin>>EngineCC;
			cout<<"\nExtra Details :\n";
		 	cin>>ExtraDetails;
		 	
		 	
		 	
		 }
		 
		void showCarDetails()
		{
			cout<<"Price              : PKR "<<Price<<endl;
			cout<<"Brand              : "<<brand<<endl;
			cout<<"Model              : "<<model<<endl;
			cout<<"Year               : "<<year<<endl;
			cout<<"Mileage            : "<<mileage<<"KM"<<endl;
			cout<<"Registration City  : "<<registrationCity<<endl;
			cout<<"Fuel Type          : "<<fuel<<endl;
			cout<<"Engine CC          : "<<EngineCC<<"CC"<<endl;
			cout<<"Extra Details      : \t"<<ExtraDetails<<endl;
		}
	
};


class Car : public Vehicles,public RandomSeller   // MULTIPLE INHERITANCE
{
	public:
		void GetCarDetails()
		{
			Vehicles :: getCarDetails();
			
			
		}
		
		void GetSellerDetails()
		{
			RandomSeller :: EnterSellerDetails();
			
		}
	
	
};



class Bus : public Vehicles, public RandomSeller     // MULTIPLE INHERITANCE
{
	protected:
		int NoOfSeats;
		string Type;
		
	public:
		void GetSellerDetails()
		{
			RandomSeller :: EnterSellerDetails();
			
			
		}
		void GetBusDetails()
		{
			Vehicles :: getCarDetails();
			cout<<"\nNo Of Seats : ";
			cin>>NoOfSeats;
			cout<<"\nType Of Bus : ";
			cin>>Type;
			
		}	
	
};

