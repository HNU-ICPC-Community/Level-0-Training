// F. Infinity Gauntlet

#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n, x;
    cin >> n;

    while (n--)
    {
        cin >> x;
        cout << x / 2;
        cout << (x % 2 == 0 ? ".0\n" : ".5\n");
    }
}