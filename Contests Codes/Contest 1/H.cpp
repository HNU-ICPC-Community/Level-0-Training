// H. Lucky Numbers

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

    int t;
    cin >> t;

    while (t --) {
        int l, r;
        cin >> l >> r;

        int maxLuck = 0, num = l;
        for(int i = l; i <= r; ++i) { // 10^6  --> 7 * 10^6 * 10^4 == 7 * 10^10
            int mnDigit = 9, mxDigit = 0;
            int curNum = i;

            // 1223
            while (curNum > 0) { // 7
                int rem = curNum % 10; // 57 --> 2, 53 --> 2
                mnDigit = min(mnDigit, rem); //
                mxDigit = max(mxDigit, rem); //
                curNum /= 10;
            }

            int curluck = mxDigit - mnDigit;
            if(curluck > maxLuck)
                maxLuck = curluck, num = i;

            if(maxLuck == 9) break;
        }

        cout << num << '\n';

    }
    return 0;
}