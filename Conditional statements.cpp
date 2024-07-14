#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    if (n >=1 && n <= 9) {
        switch (n)
        {
        case 1: cout << "One" << endl;
            break;
        case 2: cout << "Two" << endl;
            break;
        case 3: cout << "Three" << endl;
            break;
        case 4: cout << "Four" << endl;
            break;
        case 5: cout << "Five" << endl;
            break;
        case 6: cout << "Six" << endl;
            break;
        case 7: cout << "Seven" << endl;
            break;
        case 8: cout << "Eight" << endl;
            break;
        case 9: cout << "Nine" << endl;
            break;
        
        }
    }
    else if(n==0) {
        cout << "Zero" << endl;
    }
    else {
        cout << "Greater than 9." << endl;
    }
    
}


