#include <iostream>
#include <ctime>
using namespace std;

int* createArr(int* arr, int* size) {
    for (int i = 0; i < *size; ++i) {
        arr[i] = rand() % 100;
    }
    return arr;
}

void printArr(int* arr, int* size) {
    for (int i = 0; i < *size; i++) {
        cout << *(arr + i) << " ";
    }
    cout << endl;
}

int* reverseArr(int* arr, int* size) {
    int* beg = arr;
    int* end = arr + *size - 1;

    while (beg < end) {

        int temp = *beg;
        *beg = *end;
        *end = temp;

        beg++;
        end--;
    }

    return arr;
}

int main() {
    srand(time(0));
    int* size = new int{ 10 };

    int* arr = new int[*size];
    createArr(arr, size);
    cout << "Array before reverse:" << endl;
    printArr(arr, size);
    reverseArr(arr, size);
    cout << endl << "Array after reversing:" << endl;
    printArr(arr, size);

    delete[] arr;
    delete size;
    return 0;
}