// E. ICPC Balloons

#include <bits/stdc++.h>
using namespace std;
const int MAX = 200007;
const int MOD = 1000000007;

int main()
{
    int tt;
    cin >> tt;
    while (tt--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        bool vis[26] = {};
        int res = 0;
        for (char c : s)
        {
            if (!vis[c - 'A'])
            {
                res += 2;
                vis[c - 'A'] = true;
            }
            else
            {
                res++;
            }
        }
        cout << res << '\n';
    }
}
