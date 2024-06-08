#include <iostream>
using namespace std;


bool* IsNegative(int* number) {
	if (*number == 0) {
		cout << "Zero" << endl;
		return 0;
	}
	else {
		return (*number < 0) ? new bool{ true } : new bool{ false };
	}
}

int main() {
	int* number = new int;
	cout << "Enter a number:"; cin >> *number;
	cout << "(" << *number << ")" << "-";
	(*IsNegative(number) == true) ? cout << "Negative" << endl : cout << "Positive" << endl;
	delete number;
	return 0;
}