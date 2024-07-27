#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "Hello World!\n\n";
    cout << "Enter two integers :";
    cin >> a >> b;
    int sum = a + b;
    int quotient = a / b;
    int diff = a - b;
    int mult = a * b;
    cout << "SUM = " << sum << endl;
    cout << "DIFFERENCE = " << diff <<endl;
    cout << "MULTIPLICATION = " << mult << endl;
    cout << "QUOTIENT = " << quotient << endl;
    return 0;
    
    
}

