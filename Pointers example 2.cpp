#include <iostream>
using namespace std;
int* findMax(int arr[], int size) {
    if (size == 0)
        return nullptr;

    int* maxPtr = &arr[0];
    for (int i = 1; i < size; ++i) {
        if (arr[i] > *maxPtr) {
            maxPtr = &arr[i];
        }
    }
    return maxPtr;
}

int main() {
    int array[] = { 10, 4, 6, 8, 3 };
    int size = sizeof(array) / sizeof(array[0]);

    int* maxPtr = findMax(array, size);

    if (maxPtr != nullptr) {
        cout << "Maximum element in array: " << *maxPtr << endl;
    }
    else {
        cout << "Array is empty." << endl;
    }
    return 0;
}
