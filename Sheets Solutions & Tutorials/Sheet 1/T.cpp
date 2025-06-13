// T. Cloning Toys

#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    long long a, b;
    cin >> a >> b;

    int copies = b - 1;
    int original = b - 1;

    if (copies != a && (copies > a || (a - copies) & 1))
        cout << "No" << endl;
    else
        cout << "Yes" << endl;
}