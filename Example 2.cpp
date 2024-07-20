#include <iostream>
using namespace std;
int main() {
    char ch;
    float temperature, convertedTemp;

    cout << "Choose conversion:\n";
    cout << "1. Fahrenheit to Celsius\n";
    cout << "2. Celsius to Fahrenheit\n";
    cout << "Enter your choice (1 or 2): ";
    cin >> ch;

    switch (choice) {
    case '1':
        cout << "Enter temperature in Fahrenheit: ";
        cin >> temperature;
        convertedTemp = (temperature - 32) * 5 / 9;
        cout << "Temperature in Celsius: " << convertedTemp << " °C";
        break;
    case '2':
        cout << "Enter temperature in Celsius: ";
        cin >> temperature;
        convertedTemp = (temperature * 9 / 5) + 32;
        cout << "Temperature in Fahrenheit: " << convertedTemp << " °F";
        break;
    default:
        cout << "Invalid choice!";
        break;
    }

    cout << endl;

    return 0;
}
