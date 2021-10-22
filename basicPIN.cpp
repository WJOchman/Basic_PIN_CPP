#include <iostream>
using namespace std;

void main() {
	int userPin = 1234, pin, errorCounter = 0;
	
	do {
		cout << "PIN: ";
		cin >> pin;
		if (pin != usersPin)
			errorCounter++;

	} while (errorCounter < 3 && pin != usersPin);

	if (errorCounter < 3)
		cout << "Loading....\n";
		cout << "Correct!";
	else 
		cout << "Incorrect PIN. Blocked!";

system("paused>0");
}
