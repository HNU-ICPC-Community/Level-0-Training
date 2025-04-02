// F. Lollipop and the Shapes

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

    // any Square is Rectangle but

    int A;
    cin >> A;

    int srt = sqrt(A); // 9  srt * srt == A

    if(A == 1)
        cout << "Square\n";
    else if(srt * srt == A)
        cout << "Unknown\n";
    else
        cout << "Rectangle\n";

    return 0;
}