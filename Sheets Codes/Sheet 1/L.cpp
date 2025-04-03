// L. Sum Battle: Digits Edition

#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n, x;
    cin >> n;

    int single, dble;
    while (n--)
    {
        cin >> x;
        if (x < 10)
            single += x;
        else
            dble += x;
    }

    cout << (dble != single ? "Alice wins\n" : "Bob wins\n");
}
