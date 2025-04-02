// E. Robin Helps

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

    int t;
    cin >> t;

    while( t--) {
        int n, k;
        cin >> n >> k;

        int a, cnt = 0, gold = 0;
        for(int i = 0; i < n; ++i) {
            cin >> a;
            if(a >= k)
                gold += a;
            else if(a == 0 && gold > 0)
                gold --, cnt ++;
        }

        cout << cnt << '\n';
    }

    return 0;
}