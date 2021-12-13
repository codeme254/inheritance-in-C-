//program to demonstrate single inheritance in C++
//in single inheritance, a derived class inherits from only one super/base class
#include <iostream>
using namespace std;

//the base class/super class/ parent class
class vehicle{
	public:
		string name;
		int wheels, passengers;
		void promptVehicleData(){
			cout<<"ENTER THE NAME OF THE VEHICLE: ";
			getline(cin, name);
			cout<<"HOW MANY WHEELS DOES THE VEHICLE HAVE: ";
			cin>>wheels;
			cout<<"HOW MANY PASSENGERS CAN THE VEHICLE CARRY: ";
			cin>>passengers;
		}
		void printVehicleData(){
			cout<<"\n\n+----THIS IS THE VEHICLE DATA----+"<<endl;
			cout<<"VEHICLE NAME: "<<name<<endl;
			cout<<"NUMBER OF WHEELS: "<<wheels<<endl;
			cout<<"PASSENGERS: "<<passengers<<endl;
		}
};

//the derived class/ the child-class/ sub-class
class chevrolet: public vehicle{
	public:
		void showVehicleCost(){
			cout<<"CHEVROLET COSTS KSH.10, 000, 000"<<endl;
		}
};

int main(){
	cout<<"THIS PROGRAM DEMONSTRATES SINGLE INHERITANCE IN C++\n"<<endl;
	chevrolet chevrolet1;
	
	//using the promptVehicleData() method which is a method in the vehicle class
	chevrolet1.promptVehicleData();
	//using printVehicleData() method which is a method in the vehicle class
	chevrolet1.printVehicleData();
	//using showVehicleCost() method which is a method for the chevrolet class itself
	chevrolet1.showVehicleCost();
	return 0;
}