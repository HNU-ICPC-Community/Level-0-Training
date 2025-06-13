// D. Vanya and Fence

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n, h;
    cin >> n >> h;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int cnt = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > h)
        {
            cnt += 2;
        }
        else
        {
            cnt += 1;
        }
    }

    cout << cnt << endl;
}