// I. Mo the staircase builder

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    int ans = 0;
    for (int i = n; i > 0; --i)
    {
        int a;
        cin >> a;
        ans += abs(i - a);
    }
    
    if (ans <= k)
    {
        cout << ans;
    }
    else
    {
        cout << -1;
    }
    return 0;
}
