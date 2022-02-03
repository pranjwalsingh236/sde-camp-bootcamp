#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    cout << "Enter a number: " << endl;
    cout << "1 for addition" << endl;
    cout << "2 for subtraction" << endl;
    cout << "3 for multiplication" << endl;
    cout << "4 for division" << endl;
    cin >> x;
    cout << "Enter two numbers: ";
    int a, b;
    cin >> a >> b;
    switch (x)
    {
        case 1: 
            cout << "The sum of " << a << " and " << b << " is: " << a + b << endl;
            break;

        case 2:
            cout << "The difference of " << a << " and " << b << " is: " << a - b << endl;
            break;

        case 3:
            cout << "The multiplication of " << a << " and " << b << " is: " << a * b << endl;
            break;

        case 4:
            cout << "The division of " << a << " and " << b << " is: " << a / b << endl;
            break;

        default:
            cout << "Invalid input" << endl;;
            break;
    }
    return 0;
}