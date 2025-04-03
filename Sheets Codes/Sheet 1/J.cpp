// J. Sort Numbers

#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    int sum = a + b + c, mn = min({a, b, c}), mx = max({a, b, c});

    cout << mn << endl << sum - mn - mx << endl << mx;
    cout << endl ;
    cout << a << endl << b << endl << c << endl;
}
