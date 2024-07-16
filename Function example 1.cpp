#include <iostream>
using namespace std;

// Function which calculate the addition, subtraction, multiplication, and division of two integer values
int sum(int a, int b) {
    return a + b;
}

int sub(int a, int b) {
    return a - b;
}

int mult(int a, int b) {
    return a * b;
}

int  division(int a, int b) {
    return a / b;
}

int main() {
    int num1, num2;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    int addition = sum(num1, num2);
    cout << "The sum is: " << addition << endl;

    int subtraction = sub(num1, num2);
    cout << "The subtaction is: " << subtraction << endl;

    int multiplication = mult(num1, num2);
    cout << "The multiplication is: " << multiplication << endl;

    int result = division(num1, num2);
    cout << "The division is: " << result << endl;

}
