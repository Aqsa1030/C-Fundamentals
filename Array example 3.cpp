#include <iostream>
using namespace std;
int main() {
    
    int arr[8] = { 3, 1, 4, 1, 5, 77, 90, 123 };
    int max = arr[0];
    
    for (int i = 1; i < 8  ; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    cout << "Maximum element in the array: " << max << endl;

    return 0;
}
