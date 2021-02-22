#include<iostream>

using namespace std;

int main(){
	int year;
	cout << "Input a year: " ;
	cin>>year;
	cout << "Is " << year << "a leap year? ";
	if( (year%4 == 0 || year%100 != 0) && year%400==0 ){
		cout << "Yes";
	} else{
		cout << "No" << endl ;
	}
}
