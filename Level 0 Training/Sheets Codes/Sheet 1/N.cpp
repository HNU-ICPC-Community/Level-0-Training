// N. Leftmost Digit

#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    long long n;
    cin >> n;

    int rem;
    while (n)
    {
        rem = n % 10;
        n /= 10;
    }

    cout << rem << '\n';
}
