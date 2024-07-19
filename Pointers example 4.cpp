#include <iostream>

void doubleValue(int* a) {
    *a = 2 * (*a);
}

int main() {
    int num;

    // Input an integer from the user
    std::cout << "Enter a number: ";
    std::cin >> num;

    // Call doubleValue function with pointer to num
    doubleValue(&num);

    // Output the doubled value
    std::cout << "Doubled value: " << num << std::endl;

    return 0;
}
