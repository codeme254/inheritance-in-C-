//program to demonstrate multiple inheritance in C++
//in multiple inheritance, 1 derived class inherits from many base classes
#include <iostream>
using namespace std;

//base class 1
class add{
	public:
		int addDigits(int num1, int num2){
			return num1+num2;
		}
};
//base class 2
class subtract{
	public:
		int subtractDigits(int num1, int num2){
			return num1-num2;
		}
};
//base class 3
class multiply{
	public:
		int multiplyDigits(int num1, int num2){
			return num1*num2;
		}
};
//base class 4
class divide{
	public:
		int divideDigits(int num1, int num2){
			return num1/num2;
		}
};

//the derived class now
class digits: public add, public subtract, public multiply, public divide{
	public:
		int num1, num2;
		int getFirstDigit(){
			cout<<"Enter the first digit ";
			cin>>num1;
			return num1;
		}
		int getSecondDigit(){
			cout<<"Enter the second digit ";
			cin>>num2;
			return num2;
		}
};

int main(){
	cout<<"THIS PROGRAM DEMONSTRATES MULTIPLE INHERITANCE IN C++\n"<<endl;
	digits collection1;
	int num1 = collection1.getFirstDigit();
	int num2 = collection1.getSecondDigit();
	
	//collection1 object inheritting the addDigits() method to display the sum of the two digits
	cout<<"SUMMATION: "<<collection1.addDigits(num1, num2)<<endl;
	//collection1 object inheritting the subtractDigits() method to display the difference of the two digits
	cout<<"DIFFERENCE: "<<collection1.subtractDigits(num1, num2)<<endl;
	//collection1 object inheritting the mutltiplyDigits() method to display the productof the two digits
	cout<<"DIFFERENCE: "<<collection1.multiplyDigits(num1, num2)<<endl;
	//collection1 object inheritting the divideDigits() from the divide class to calculate the division
	cout<<"DIVISION: "<<collection1.divideDigits(num1, num2)<<endl;
	return 0;
}