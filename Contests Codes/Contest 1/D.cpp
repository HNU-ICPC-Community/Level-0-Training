// D. Cut Ribbon

#include <iostream>
#include <cmath>
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
    cin >> n >> a >> b >> c;

    int mxPieces = 0;
    for(int i = 0; i * a <= n; ++i) { // n = 5 , a = 2
        for(int j = 0; (i * a + j * b) <= n; ++j) {
            // 9
            // i * a + j * b + (k * c) = n
            // (k * c) = n - (i * a + j * b);
            // (k * c) = rem
            // rem % c == 0 then k * c == rem
            int rem = n - (i * a + j * b);
            if(rem % c == 0) {
                mxPieces = max(mxPieces, i + j + rem / c);
            }
        }
    }

    cout << mxPieces << '\n';
    return 0;
}