// F. Midoriya and Book

#include <iostream>
using namespace std;

int main()
{
    int n, arr[7], sum = 0;
    cin >> n;

    for (int i = 0; i < 7; i++)
    {
        cin >> arr[i];
    }

    while (true)
    {
        for (int i = 0; i < 7; i++)
        {
            sum += arr[i];
            if (sum >= n)
            {
                cout << i + 1;
                return 0;
            }
        }
    }
}