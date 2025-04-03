// V. Cat Party

#include<bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;

int n, color, ans, mx, f[N], cnt[N];

int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> color;
        cnt[f[color]]--;
        f[color]++;
        cnt[f[color]]++;
        mx = max(mx, f[color]);
        bool ok = false;
        if (cnt[1] == i)
            ok = true;
        else if (cnt[i] == 1)
            ok = true;
        else if (cnt[1] == 1 && cnt[mx] * mx == i - 1)
            ok = true;
        else if (cnt[mx - 1] * (mx - 1) == i - mx && cnt[mx] == 1)
            ok = true;
        if (ok)
            ans = i;
    }
    cout << ans << endl;
    return 0;
}