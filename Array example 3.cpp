#include <iostream>
int main() {
    // Declare and initialize an array
    int arr[8] = { 3, 1, 4, 1, 5, 77, 90, 123 };
    int max = arr[0];

    // Find the maximum element
    for (int i = 1; i < 8  ; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    std::cout << "Maximum element in the array: " << max << std:: endl;

    return 0;
}
