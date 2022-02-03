#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    cout << "Enter a number: ";
    cin >> x;
    int sum = 0;
    for(int i = 1; i <= x; i++)
    {
        sum += i;
    }
    cout << "The sum upto number " << x <<  " is: " << sum;
    return 0;
}