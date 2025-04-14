// A. Beautiful Year

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = n + 1; i <= 9012; ++i)
    {
        int x = i;
        int a = x % 10;
        x /= 10;
        int b = x % 10;
        x /= 10;
        int c = x % 10;
        x /= 10;
        if (a != b && a != c && a != x && b != c && b != x && c != x)
        {
            cout << i;
            break;
        }
    }
    return 0;
}
