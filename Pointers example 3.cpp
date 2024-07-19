#include <iostream>
using namespace std;
bool isPrime(int* ptr) {
    int num = *ptr;

    if (num <= 1) {
        return false;
    }
    if (num <= 3) {
        return true;
    }

    // Check for divisibility from 2
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) {
            return false;
        }
    }

    return true;
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    if (isPrime(&number)) {
        cout << number << " is a prime number." << endl;
    }
    else {
        cout << number << " is not a prime number." << endl;
    }

    return 0;
}
