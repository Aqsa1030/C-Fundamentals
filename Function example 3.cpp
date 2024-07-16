#include <iostream>
using namespace std;

//Calculate the factorial of any number
long long factorial(int n) {
    if (n < 0) {
        return -1; // Return -1 for negative numbers
    }
    long long result = 1;
    for (int i = 1; i <= n; ++i) {
        result *= i;
    }
    return result;
}

int main() {
    int number;

    cout << "Enter a number to calculate its factorial: ";
    cin >> number;

    long long result = factorial(number);

    if (result == -1) {
        cout << "Factorial is not defined for negative numbers." << endl;
    }
    else {
        cout << "The factorial of " << number << " is: " << result << endl;
    }

    return 0;
}
