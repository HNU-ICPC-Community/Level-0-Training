// R. The Magical Forest Adventure

#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n, x;
    cin >> n;

    int sum{};
    while (n--)
    {
        cin >> x;
        if (x % 2 == 0)
        {
            sum += (x > 10) ? x / 2 : x;
        }
    }

    cout << sum << '\n';
}