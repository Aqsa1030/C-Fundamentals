#include <iostream>
using namespace std;
int main() {
    int arr[10] = { 10, 20, 30, 40, 50, 90, 45, 23,14, 99};
    int sum = 0;

    for (int i = 0; i < 10; ++i) {
        sum += arr[i];
    }

    double average = static_cast<double>(sum) / 5;
    cout << "Average: " << average endl;
    return 0;
}
