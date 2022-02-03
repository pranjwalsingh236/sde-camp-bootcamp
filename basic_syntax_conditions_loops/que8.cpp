#include <bits/stdc++.h>
using namespace std;

int main()
{
    char x;
    cout << "Enter a char: ";
    cin >> x;
    if(x == 'A' || x == 'a' || x == 'E' || x == 'e' || x == 'I' || x == 'i' || x == 'O' ||x == 'o' || x == 'U' ||x == 'u')
    {
        cout << "The char is vowel" << endl;
    }
    else
    {
        cout << "The char is consonant" << endl;
    }
    return 0;
}