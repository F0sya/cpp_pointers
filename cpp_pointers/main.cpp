#include <iostream>
using namespace std;

void change(int* number_1, int* number_2) {
	int temp = *number_1;
	*number_1 = *number_2;
	*number_2 = temp;
}

int main() {
	int* number_1 = new int;
	int* number_2 = new int;
	

	cout << "Enter an first number:"; cin >> *number_1;
	cout << "Enter an second number:"; cin >> *number_2;


	cout << "Before change:" << endl;
	cout << "First number:" << *number_1 << endl << "Second number:" << *number_2 << endl;
	change(number_1, number_2);
	cout << endl << "After change:" << endl;
	cout << "First number:" << *number_1 << endl << "Second number:" << *number_2 << endl;
	delete number_1, number_2;
	return 0;
}