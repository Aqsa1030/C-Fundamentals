#include <iostream>
using namespace std;

int main() {
    int arr[] = { 15, 22, 8, 42, 16, 45, 79, 99, 123, 786, 908};
    int searchValue;
    cout << "Enter the value you want to search : ";
    cin >> searchValue;
    bool found = false;


    for (int i = 0; i <=10 ; i++) {
        if (arr[i] == searchValue) {
            found = true;
            cout << "Element " << searchValue << " found at index " << i << endl;
            break;
        }
    }

    if (!found) {
        cout << "Element " << searchValue << " not found in the array." << endl;
    }

    return 0;
}
