// M. Fifty-Fifty

#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin >> str;
    bool valid = 0;
    int cnt = 0;
    int freq[26] = {};
    
    for (int i = 0; i < 4; i++)
    {
        freq[str[i] - 'A']++;
    }

    for (int i = 0; i < 26; i++)
    {
        if (freq[i] == 2)
        {
            cnt++;
        }
        if (cnt == 2)
        {
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;

    return 0;
}