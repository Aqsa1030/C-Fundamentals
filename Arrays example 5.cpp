#include <iostream>

int main() {
    int arr1[5] = { 10, 20, 30, 40, 50 };
    int arr2[5];

    // Copy arr1 to arr2
    for (int i = 0; i < 5; ++i) {
        arr2[i] = arr1[i];
    }

    std::cout << "Array 2: ";
    for (int i = 0; i < 5; ++i) {
        std::cout << arr2[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
