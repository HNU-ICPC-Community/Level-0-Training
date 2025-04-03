// H. 3ayz letters

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int K;
    cin >> K;
    string result = "";
    for (int i = 0; i < K; ++i)
    {
        result += char('a' + i);
    }
    cout << result << endl;
    return 0;
}