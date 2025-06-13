// G. New Summation

#include <bits/stdc++.h>
using namespace std;
#define int long long

int main()
{
    int n;
    cin >> n;

    int v[n], pre[n + 1];
    pre[0] = 0;

    for (int i = 0; i < n; ++i)
    {
        cin >> v[i];
        pre[i + 1] = v[i] + pre[i];
    }

    int ans = 0;
    for (int i = 1; i <= n; ++i)
    {
        int j = v[i - 1] + i - 1;

        j = min(j, n);
        ans += pre[j] - pre[i - 1];
    }
    cout << ans << endl;
}