#include <iostream>

int main() {
    int arr[8] = { 1, 2, 3, 1, 4 ,8,1 ,7};
    int target = 1;
    int count = 0;

    for (int i = 0; i < 8; ++i) {
        if (arr[i] == target) {
            count++;
        }
    }

    std::cout << "Occurrences of " << target << ": " << count << std::endl;
    return 0;
}
