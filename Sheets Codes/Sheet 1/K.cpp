// K. Array of Titans

#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;

    long long sum{}, x;
    while (n--)
    {
        cin >> x;
        sum += x;
    }

    cout << sum << '\n';
}
