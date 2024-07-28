#include <iostream>
#include <string>
using namespace std;

int main()
{
    int a, b, c;
    cout << "Hello World!\n\n";
    
    cout << "Enter two integers : ";
    cin >> a >> b;
    int sum = a + b;
    int quotient = a / b;
    int diff = a - b;
    int mult = a * b;
    cout << "SUM = " << sum << endl;
    cout << "DIFFERENCE = " << diff <<endl;
    cout << "MULTIPLICATION = " << mult << endl;
    cout << "QUOTIENT = " << quotient << endl;
    cout << endl;
    
    cout << "Enter a number to find whether it is even or odd : ";
    cin >> c;
    if (c%2==0){
        cout << c << " is even number";   
    }
        
    else{
        cout << c << " is odd number";
    }

    string name;

    cout << "Enter your name: ";
    getline(cin, name);

    cout << "Hello " << name << "!" << endl;
    
    return 0;
}

