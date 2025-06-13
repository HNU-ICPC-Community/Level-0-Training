// G. Can You Help Me?!

#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    long long n;
    cin >> n;

    if (n % 5 != 0)
    {
        cout << "NO\n";
        return 0;
    }

    cout << n / 15 + (n % 15 != 0) << '\n';
}
