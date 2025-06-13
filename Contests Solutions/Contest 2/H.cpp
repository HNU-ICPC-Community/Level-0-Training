// H. 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    int ans = 1;
    for (int i = 0; i < n; i++)
    {
        if (ans == arr[i])
            ans++;
        else
        {
            break;
        }
    }

    cout << ans;

    return 0;
}