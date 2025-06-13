// M.Palindrome Number

#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long x, org, rvs{};
    cin >> x, org = x;

    if (x < 0)
    {
        cout << "False" << endl;
        return 0;
    }

    while (x)
    {
        int rem = x % 10;
        rvs = rvs * 10 + rem;
        x /= 10;
    }

    cout << (rvs == org ? "True" : "False") << endl;
}
