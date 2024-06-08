#include <iostream>
using namespace std;


int* bigger(int* number_1, int* number_2) {
	if (*number_1 == *number_2) {
		cout << "They equal" << endl;
		return 0;
	}
	else {
		return (*number_1 < *number_2) ? number_2 : number_1;
	}
}

int main() {
	int* number_1 = new int;
	int* number_2 = new int;
	int* result = new int;

	cout << "Enter the first number:"; cin >> *number_1;
	cout << "Enter the second number:"; cin >> *number_2;
	result = bigger(number_1, number_2);
	cout << *result << endl;
	delete number_1, number_2, result;
	return 0;
}