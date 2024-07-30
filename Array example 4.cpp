#include <iostream>
using namespace std;
int main() {
    
    int arr[10] = { 10, 20, 30, 40, 50,90, 76, 54, 23, 99};
    int sum = 0;
    
    for (int i = 0; i < 10; i++) {
        sum += arr[i];
    }

    cout << "Sum of array elements: " << sum << endl;

    return 0;
}
