//program to demostrate hierachical inheritance
//in hierachical inheritance, all the sub classes inherit from one super class

#include <iostream>
using namespace std;

//the main base class
class takeTwoDigits{
	public:
		int number1, number2;
		int scanFirstDigit(){
			cout<<"Enter the first digit: ";
			cin>>number1;
			return number1;
		}
		int scanSecondDigit(){
			cout<<"Enter the second digit: ";
			cin>>number2;
			return number2;
		}
};

//first derived class
class checkBiggestDigit: public takeTwoDigits{
	public:
		void checkBiggest(){
			cout<<"YOU ARE HERE TO COMPARE THE BIGGEST DIGIT"<<endl;
			//using scanFirstDigit() method from takeTwoDigits class
			int num1 = scanFirstDigit();
			//using scanSecondDigit() method from takeTwoDigits class
			int num2 = scanSecondDigit();
			num1 > num2 ? cout<<""<<num1<<" is the biggest"<<endl : cout<<""<<num2<<" is the biggest"<<endl;
		}
};

//the second derived class
class checkSmallestDigit: public takeTwoDigits{
	public:
		void checkSmallest(){
			cout<<"YOU ARE HERE TO CHECK THE SMALLEST DIGIT"<<endl;
			int num1 = scanFirstDigit();
			int num2 = scanSecondDigit();
			num1 < num2 ? cout<<""<<num1<<" is the smallest"<<endl : cout<<""<<num2<<" is the smallest"<<endl;
		}
};

int main(){
	cout<<"THIS PROGRAM DEMONSTRATES HIERACHICAL INHERITANCE IN C++\n"<<endl;
	checkBiggestDigit collection1;
	collection1.checkBiggest();
	checkSmallestDigit collection2;
	collection2.checkSmallest();
	return 0;
}