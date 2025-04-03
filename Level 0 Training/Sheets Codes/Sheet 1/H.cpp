// H. Three-Point Shot

#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int x, y;
    cin >> x >> y;

    if (min(x, y) + 3 > max(x, y))
        cout << "Yes\n";
    else
        cout << "No\n";
}
