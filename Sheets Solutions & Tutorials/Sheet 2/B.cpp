// B. osu!mania

#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{

    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        vector<int> col(n);
        for (int i = n - 1; i >= 0; --i)
        {
            string rw;
            cin >> rw;
            for (int j = 0; j < 4; ++j)
            {
                if (rw[j] == '#')
                {
                    col[i] = j + 1;
                    break;
                }
            }
        }
        for (int i = 0; i < n; ++i)
        {
            cout << col[i] << " ";
        }
        cout << endl;
    }
    return 0;
}