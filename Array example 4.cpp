#include <iostream>

int main() {
    // Declare and initialize an array
    int arr[10] = { 10, 20, 30, 40, 50,90, 76, 54, 23, 99};
    int sum = 0;

    // Calculate the sum of the array elements
    for (int i = 0; i < 10; i++) {
        sum += arr[i];
    }

    std::cout << "Sum of array elements: " << sum << std :: endl;

    return 0;
}
