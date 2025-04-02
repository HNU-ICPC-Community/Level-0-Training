// B. Triple Quirk

#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;

void FileIO() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}


int main() {
    FileIO();

    int n, a, b, c;
    cin >> n;

    int cnt = 0;
    for(int i = 0; i < n; ++i) {
        cin >> a >> b >> c;
        a = a + b + c;
        cnt += (a >= 2);
    }

    cout << cnt << '\n';
    return 0;
}