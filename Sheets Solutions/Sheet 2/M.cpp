// M. Fifty-Fifty

#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin >> str;

    if (str.size() != 4)
    {
        cout << "NO" << endl;
        return 0;
    }

    int freq[256] = {0};
    for (char c : str)
    {
        freq[c]++;
    }

    int uniqueCount = 0;
    bool valid = true;
    for (int i = 0; i < 256; i++)
    {
        if (freq[i] > 0)
        {
            uniqueCount++;
            if (freq[i] != 2)
            {
                valid = false;
                break;
            }
        }
    }

    if (uniqueCount == 2 && valid)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}