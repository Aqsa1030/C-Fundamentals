#include <iostream>

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
        std::cout << "Maximum element in array: " << *maxPtr << std::endl;
    }
    else {
        std::cout << "Array is empty." << std::endl;
    }
    return 0;
}
