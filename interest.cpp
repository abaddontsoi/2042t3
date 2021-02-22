#include<iostream>

using namespace std;

int main(){
	double p_value;
	int c_type;
	cout << "What is the principal value? ";
	cin >> p_value;
	cout << "Please enter the customer type: ";
	cin >> c_type;
	cout << "Interest payable after one year: ";
	switch(c_type){
		case 0:
			cout << p_value * 0.005 << endl;
			break ;
		case 1:
			cout << p_value * 0.008 << endl;
			break ;
		case 2:
			cout << p_value * 0.01 << endl;
			break ;
		case 3:
			cout << p_value * 0.012 << endl;
			break ;
		case 4:
			cout << p_value * 0.02 << endl;
			break ;
		default :
			cout << "Error in customer type " << endl;
	}
}
