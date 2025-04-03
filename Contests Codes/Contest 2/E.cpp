// E. Spy Detected

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int ans = 0;
        for (int i = 0; i < n - 2; i++)
        {
            if (arr[i] == arr[i + 1] && arr[i] != arr[i + 2])
            {
                ans = i + 2;
                break;
            }
            else if (arr[i] == arr[i + 2] && arr[i] != arr[i + 1])
            {
                ans = i + 1;
                break;
            }
        }
        cout << ans + 1 << "\n";
    }

    return 0;
}