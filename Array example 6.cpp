#include <iostream>

int main() {
    int arr1[3] = { 1, 2, 3 };
    int arr2[3] = { 4, 5, 6 };
    int Merge[6];

    // Merge arr1 and arr2
    for (int i = 0; i < 3; ++i) {
        Merge[i] = arr1[i];
        Merge[i + 3] = arr2[i];
    }

    std::cout << "Merged Array: ";
    for (int i = 0; i < 6; ++i) {
        std::cout << Merge[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
