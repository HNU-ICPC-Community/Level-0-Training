// B. Lucky?

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    string s;
    cin >> s;
    sort(s.begin(), s.end());
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '+')
        {
            s.erase(i, 1);
            i--;
        }
    }
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i + 1] != '\0')
        {
            cout << s[i];
            cout << '+';
        }
        else
        {
            cout << s[i];
        }
    }

    return 0;
}