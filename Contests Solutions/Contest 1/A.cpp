// A. Color Clash

#include <bits/stdc++.h>
using namespace std;

void FileIO() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}

int main() {
    FileIO();

    int n;
    cin >> n;

    int cnt = 0;
    char prev = 'X';
    for(int i = 0; i < n; ++i) {
        char cur;
        cin >> cur;
        if(cur == prev) cnt ++;
        prev = cur;
    }

    cout << cnt << '\n';
    return 0;
}