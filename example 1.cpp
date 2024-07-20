#include <iostream>
using namespace std;
int main() {
    char op;
    double num1, num2;

    cout << "Enter an operation (+, -, *, /): ";
    cin >> operation;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    switch (op) {
    case '+':
        cout << num1 << " + " << num2 << " = " << num1 + num2;
        break;
    case '-':
        cout << num1 << " - " << num2 << " = " << num1 - num2;
        break;
    case '*':
        cout << num1 << " * " << num2 << " = " << num1 * num2;
        break;
    case '/':
        if (num2 != 0)
            cout << num1 << " / " << num2 << " = " << num1 / num2;
        else
            cout << "Error! Division by zero.";
        break;
    default:
        cout << "Error! Invalid operation.";
        break;
    }
    cout << endl;
    return 0;
}
