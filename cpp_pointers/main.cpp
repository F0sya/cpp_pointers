#include <iostream>
using namespace std;
double* add(double* number_1, double* number_2) {
	return (new double{ *number_1 + *number_2 });
}
double* subtraction(double* number_1, double* number_2) {
	return (new double{ *number_1 - *number_2 });
}
double* multiply(double* number_1, double* number_2) {
	return (new double{ *number_1 * *number_2 });
}
double* divide(double* number_1, double* number_2) {
	return (*number_1 != 0 && *number_2 != 0) ? new double{ *number_1 / *number_2 } : nullptr;
}
int main() {
	double* number_1 = new double;
	double* number_2 = new double;
	int* action = new int;
	double* result = nullptr;

	cout << "Enter the first number:"; cin >> *number_1;
	cout << "Enter the second number:"; cin >> *number_2;
	cout << "Enter an action(1-4):\n1 - Add\n2 - Subtraction\n3 - Multiply\n4 - Divide\n"; cin >> *action;
	switch (*action) {
	case 1:
		result = add(number_1, number_2);
		break;
	case 2:
		result = subtraction(number_1, number_2);
		break;
	case 3:
		result = multiply(number_1, number_2);
		break;
	case 4:
		result = divide(number_1, number_2);
		break;
	default:
		cout << "Unidentified action!";
		break;
		return 0;
	}
	(result != nullptr) ? cout << "Result: " << *result << endl : cout << "The result value is null!" << endl;
	delete number_1, number_2;
	if (result != nullptr)
	{
		delete result;
	}
	return 0;
}