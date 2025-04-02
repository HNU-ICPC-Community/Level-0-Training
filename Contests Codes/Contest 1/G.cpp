// G. Sail

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, sx, sy, ex, ey;
    cin >> n >> sx >> sy >> ex >> ey;

    for (int i = 0; i < n; i++)
    {
        char ch;
        cin >> ch;
        if (ch == 'S' && sy > ey)
            sy--;
        else if (ch == 'N' && sy < ey)
            sy++;
        else if (ch == 'W' && sx > ex)
            sx--;
        else if (ch == 'E' && sx < ex)
            sx++;

        if (sx == ex && sy == ey)
        {
            cout << i + 1 << '\n';
            return 0;
        }
    }

    cout << "-1\n";
    return 0;
}
