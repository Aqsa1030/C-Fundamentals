#include <iostream>

bool isPrime(int* ptr) {
    int num = *ptr;

    // Handle special cases
    if (num <= 1) {
        return false;
    }
    if (num <= 3) {
        return true;
    }

    // Check for divisibility from 2 to sqrt(num)
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) {
            return false;
        }
    }

    return true;
}

int main() {
    int number;
    std::cout << "Enter a number: ";
    std::cin >> number;

    if (isPrime(&number)) {
        std::cout << number << " is a prime number." << std::endl;
    }
    else {
        std::cout << number << " is not a prime number." << std::endl;
    }

    return 0;
}
