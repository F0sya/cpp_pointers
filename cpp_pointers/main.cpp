#include <iostream>
using namespace std;

template <typename T>
T* createArray(int size) {
    T* arr = new T[size];
    for (int i = 0; i < size; i++) {
        arr[i] = rand() % 255;
    }
    return arr;
}
template <typename T>
void printArray(T* arr, int size) {
    for (int i = 0; i < size; i++) {
        cout << *(arr + i) << " ";
    }
    cout << endl;
}
template <typename T>
T* copyArray(int* arr, int* result_arr, int* size) {
    for (int i = 0; i < *size; i++) {
        *(result_arr + i) = *(arr + i);
    }
    return result_arr;

}

int main() {
	srand(time(0));
	int* size = new int;
    cout << "Enter the size of the array: ";
    cin >> *size;
    int* arr = createArray<int>(*size);
    int* result_arr = createArray<int>(*size);
    cout << endl << "First array before copy:" << endl;
    printArray(arr, *size);
    cout  << "Second array before copy:" << endl;
    printArray(result_arr, *size);

    copyArray<int>(arr, result_arr, size);

    cout << endl << "First array after copy:" << endl;
    printArray(arr, *size);
    cout << "Second array after copy:" << endl;
    printArray(result_arr, *size);

    delete[] arr, result_arr;
    delete size;
    return 0;
}