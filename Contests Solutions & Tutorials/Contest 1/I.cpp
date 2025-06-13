// I. Sasa Man's Box

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x1, y1, x2, y2, x3, y3, x4, y4;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;

    int s1 = (x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2);
    int s2 = (x1 - x3) * (x1 - x3) + (y1 - y3) * (y1 - y3);
    int s3 = (x1 - x4) * (x1 - x4) + (y1 - y4) * (y1 - y4);
    int s4 = (x2 - x3) * (x2 - x3) + (y2 - y3) * (y2 - y3);
    int s5 = (x2 - x4) * (x2 - x4) + (y2 - y4) * (y2 - y4);
    int s6 = (x3 - x4) * (x3 - x4) + (y3 - y4) * (y3 - y4);

    int side = min({s1, s2, s3, s4, s5, s6});
    int diag = max({s1, s2, s3, s4, s5, s6});

    int sideCnt = (s1 == side) + (s2 == side) + (s3 == side) + (s4 == side) + (s5 == side) + (s6 == side);
    int diagCnt = (s1 == diag) + (s2 == diag) + (s3 == diag) + (s4 == diag) + (s5 == diag) + (s6 == diag);

    if (diagCnt == 2 && sideCnt == 4 && diag == side * 2)
        cout << "Yes\n";
    else
        cout << "No\n";

    return 0;
}
