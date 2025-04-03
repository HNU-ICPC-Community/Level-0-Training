// T. No Repeat

#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;
    string S;
    cin >> S;

    int freq[26] = {0};
    for (char c : S)
    {
        freq[c - 'a']++;
    }

    for (char c : S)
    {
        if (freq[c - 'a'] == 1)
        {
            cout << c << endl;
            return 0;
        }
    }

    cout << -1 << endl;
    return 0;
}
