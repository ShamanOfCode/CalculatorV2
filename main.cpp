/*****************************************
* Linear function calculator
* y=mx+b
*****************************************/
#include <iostream>

using namespace std;

// Variables
int m = 0;
int x = 0;
int b = 0;

void input();
void calculation();
void WayofCalc();
void input();

void input() {
	string choice;

	cout << "m = ";
	cin >> m;

	cout << "Enter 'x' to leave it blank" << endl;
	cout << "x = ";
	cin >> x;

	cout << "b = ";
	cin >> b;

	/*************************************************************************
	 *	Here will be a function that will switch the "way of the calculation"
	 *	so if y=0 (0=mx+b) to be calculated
	 *************************************************************************/
	if (x == 'x') {cout << "Your function: y=" << m << "x" << "+" << b << endl;}
	else {cout << "Your function: y=" << m << "*" << x << "+" << b << endl;}

	cout << "Is your function correct or do you want to change it? (yes/no):" << endl;
	cin >> choice;

	if (choice == "yes" || choice == "Yes" || choice == "YES") {
		calculation();
	}

	else if (choice == "no" || choice == "No" || choice == "NO") {
		system("clear");
		return input();
	}
}

void calculation() {

}

void WayofCalc() {

}

int main() {
	cout << "Enter your linear function (y=mx+b):" << endl;

	input();
	calculation();

	return 0;
}
