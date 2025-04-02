// C. Again Twenty Five!

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    long long n;
    cin >> n; 
    
    if(n < 2) 
        cout << (n == 1 ? "5\n" : "1\n");
    else 
        cout << "25\n";
    
    return 0;
}