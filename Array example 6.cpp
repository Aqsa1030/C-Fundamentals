#include <iostream>
using namespace std;
int main() {
    int arr1[3] = { 1, 2, 3 };
    int arr2[3] = { 4, 5, 6 };
    int Merge[6];

    for (int i = 0; i < 3; ++i) {
        Merge[i] = arr1[i];
        Merge[i + 3] = arr2[i];
    }
    cout << "Merged Array: ";
    for (int i = 0; i < 6; ++i) {
        cout << Merge[i] << " ";
    }
    cout << std::endl;
    return 0;
}
