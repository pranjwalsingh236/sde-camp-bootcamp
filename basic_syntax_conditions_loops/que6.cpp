#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x, y, z;
    cout << "Enter three numbers x, y, z: ";
    cin >> x >> y >> z;
    if(x > y && y > z || x > z && z > y)
    {
        cout << "The largest is: x " << x << endl;
    }
    else if(z > y && y > x || z > x && x > y)
    {
        cout << "The largest is: z " << z << endl;
    }
    else
    {
        cout << "The largest is: y " << y << endl;
    }
    return 0;
}