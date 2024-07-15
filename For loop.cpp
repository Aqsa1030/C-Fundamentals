#include <iostream>
using namespace std;
int main()
{
    cout << "SQUARE OF NUMBERS FROM 1 TO 10 : " << endl ;
    // loop which prints the square of number from 1 to 10.
    for (int n = 1; n <= 10; n++) {
        cout << "The square of " << n << " is " << n * n << endl;

    }
    cout << endl;
    // loop that sums all the even numbers from 1 to 20
    int sum = 0;
    for (int n = 0; n <= 20; n = n + 2) {
        sum = sum + n;

    }
    cout << "SUM = " << sum;
}

