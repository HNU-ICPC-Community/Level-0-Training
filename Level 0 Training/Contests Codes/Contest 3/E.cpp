// E. Games

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int x[111]{}, y[111]{};

    int ans = 0;

    for (int i = 0; i < n; ++i)
    {
        int a, b;
        cin >> a >> b;
        ans += y[a] + x[b];
        x[a]++, y[b]++;
    }

    cout << ans;

    return 0;
}

/* Another Solution:

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin >> n;
    int x[n], y[n];

    for (int i=0; i<n; ++i)
        cin >> x[i] >> y[i];

    int ans=0;

    for (int i=0; i<n; ++i)
    {
        for (int j=0; j<n; ++j)
        {
            if (i!=j)
            {
                if (x[i] == y[j]) ans++;
            }
        }
    }

    cout << ans << endl;
    return 0;
}


*/