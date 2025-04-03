// S. Sum of awesome digits

#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    long long n;
    cin >> n;

    int sum{};
    while (n)
    {
        int rem = n % 10;
        sum += (rem & 1) ? rem : 0;
        n /= 10;
    }
    cout << sum;
}