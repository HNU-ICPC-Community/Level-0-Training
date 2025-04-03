// I. Alternating Beauty

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;

    int A[N];
    for (int i = 0; i < N; ++i)
    {
        cin >> A[i];
    }

    string S;
    cin >> S;

    sort(A, A + N, greater<int>());
    sort(S.begin(), S.end());

    string B[N];
    int aIndex = 0, sIndex = 0;

    for (int i = 0; i < N; ++i)
    {
        if (i % 2 == 0)
        {
            B[i] = to_string(A[aIndex++]);
        }
        else
        {
            B[i] = string(1, S[sIndex++]);
        }
    }

    for (int i = 0; i < N; i++)
    {
        cout << B[i];
        if (i < N - 1)
            cout << " ";
    }
    cout << " ";

    return 0;
}