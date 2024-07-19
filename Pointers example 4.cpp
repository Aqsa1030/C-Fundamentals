#include <iostream>
using namespace std;
void doubleValue(int* a) {
    *a = 2 * (*a);
}

int main() {
    int num;

    // enter value
    cout << "Enter a number: ";
    cin >> num;
    doubleValue(&num);

    // Output the value
    cout << "Doubled value: " << num << endl;

    return 0;
}
