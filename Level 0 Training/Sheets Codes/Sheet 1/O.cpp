// O. Bear and Big Brother

#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{
    long long a, b;
    cin >> a >> b;

    int cnt{};
    while (a <= b)
    {
        a *= 3;
        b *= 2;
        cnt++;
    }

    cout << cnt << '\n';
}
