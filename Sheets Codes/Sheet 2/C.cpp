// C. Spell Check

#include <bits/stdc++.h>
using namespace std;
int main()
{
    string name = "Timur";
    sort(name.begin(), name.end());

    int tc;
    cin >> tc;

    while (tc--)
    {
        int n;
        cin >> n;

        string target;
        cin >> target;

        sort(target.begin(), target.end());

        cout << (target == name ? "YES" : "NO") << endl;
    }

    return 0;
}