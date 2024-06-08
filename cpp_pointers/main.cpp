#include <iostream>
#include <ctime>
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
T* sumArray(int* arr, int* size) {
    int* sum = new int{ 0 };
    for (int i = 0; i < *size; i++) {
        *sum += *(arr + i);
    }
    return sum;
}

int main() {
    srand(time(0));
    int* size = new int;
    int* result = nullptr;
    cout << "Enter the size of the array: ";
    cin >> *size;
    int* arr = createArray<int>(*size);
    printArray(arr, *size);

    result = sumArray<int>(arr, size);

    cout << "Summary:" << *result << endl;
    delete[] arr;
    delete size,result;
 

    return 0;
}