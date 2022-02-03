#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    cout << "Enter a number: ";
    cin >> x;
    int fact = 1;
    if(x <= 1)
    {
        cout << "The factorial of number entered is: 1";
    }
    else
    {
        for(int i = 1; i <= x; i++)
        {
            fact *= i;
        }
        cout << "The factorial of number entered is: " << fact;
    }
    return 0;
}