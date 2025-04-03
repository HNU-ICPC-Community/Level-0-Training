// W. Garland

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s, t;
    cin >> s >> t;
    int freq[26] = {0};
    for (char c : s)
        freq[c - 'a']++;
    for (char c : t)
        if (freq[c - 'a'] == 0)
            return cout << -1, 0;
    int ans = 0;
    for (char c : t)
    {
        if (freq[c - 'a'] > 0)
        {
            ans++;
            freq[c - 'a']--;
        }
    }

    cout << ans;
}