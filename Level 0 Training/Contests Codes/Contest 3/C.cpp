// C. Calculating Function

#include <bits/stdc++.h>
using namespace std;

// -1 +2 -3 +4 -5 = 2
//    +1    +1   -5 == -3
//  +2 - 5 == -3

int main()
{
    long long n;
    cin >> n;
    if (n % 2 == 0)
    {
        cout << n / 2;
    }
    else
    {
        cout << (n / 2) - n;
    }
    return 0;
}

/* Another Solution:
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n; cin >> n;
    cout << ((n % 2 == 0) ? 1 : -1) * ((n + 1) / 2);
    return 0;
}


*/