// N. Be Fast

#include <iostream>
using namespace std;

int main() {
    int X, Y, Z;
    cin >> X >> Y >> Z;

    cout << Y - X + 1 - (Y / Z) + (X - 1) / Z;
    return 0;
}