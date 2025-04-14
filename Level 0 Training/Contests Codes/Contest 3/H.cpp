// H. Life Without Zeros

#include <bits/stdc++.h>
using namespace std;

int remove(int n)
{
    string s = to_string(n);
    int ans = 0;
    for (int i = 0; i < s.size(); ++i)
    {
        if (s[i] != '0')
        {
            ans = (ans * 10) + (s[i] - '0');
        }
    }
    return ans;
}

int main()
{
    int a, b;
    cin >> a >> b;
    int c = a + b;

    a = remove(a);
    b = remove(b);
    c = remove(c);
    
    if (a + b == c)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}
