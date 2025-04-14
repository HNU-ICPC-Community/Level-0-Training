// B. Buy a Shovel

#include <bits/stdc++.h>

using namespace std;

// ans  = n * k (- r)

int main()
{
    int k, r;
    cin >> k >> r;
    for (int i = 1; i <= 10; ++i)
    {
        int ans = k * i;
        int ans2 = (k * i) - r;
        if (ans % 10 == 0 || ans2 % 10 == 0)
        {
            cout << i;
            break;
        }
    }
    return 0;
}
