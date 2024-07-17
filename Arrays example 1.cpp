#include <iostream>
using namespace std;

int main() {
    int arr[5] = { 1, 2, 3, 4, 5 };
    int reverse[5];

    for (int i = 0; i < 5; i++) {
        reverse[i] = arr[4 - i];
    }
    // Output reversed array
    cout << "Reversed array: ";
    for (int i = 0; i < 5; i++) {
        cout << reverse[i] << " ";
    }
    cout << endl;
    return 0;
}
