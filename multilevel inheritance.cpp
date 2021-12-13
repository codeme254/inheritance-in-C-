//program to demonstrate multilevel inheritance in C++
//in multilevel inheritance, a derived class inherits from a base class and the derived class
//becomes a parent to another base class which my also become a parent to another base class
#include <iostream>
using namespace std;

//the base class
class takeTwoDigits{
	public:
		int dig1, dig2;
		int scanFirstDigit(){
			cout<<"Enter the first digit: ";
			cin>>dig1;
			return dig1;
		}
		int scanSecondDigit(){
			cout<<"Enter the second digit: ";
			cin>>dig2;
			return dig2;
		}
};

//first derived class which will also be a base class
class printBiggest: public takeTwoDigits{
	public:
		bool isBiggest(){
			//using the scanFirstDigit() method, which is a method in takeTwoDigits() class
			int num1 = scanFirstDigit();
			//using the scanSecondDigit() method, which is a method in takeTwoDigits() class
			int num2 = scanSecondDigit();
			return num1 > num2;
		}
};
//second derived class inheritting from the first derived class
class displayComparisonResults: public printBiggest{
	public:
		void print(){
			if(isBiggest()){
				cout<<"THE FIRST DIGIT IS THE BIGGEST"<<endl;
			}else{
				cout<<"THE SECOND DIGIT IS THE BIGGEST"<<endl;
			}
		}
};

int main(){
	cout<<"THIS PROGRAM DEMONSTRATES MULTILEVEL INHERITANCE IN C++\n"<<endl;
	displayComparisonResults comparison1;
	comparison1.print();
}