/**
 *    author: mohin    
**/

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    long long n{}, m{}, x{};
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> m;
        m = m - 1;
        x = - 1 + sqrt(1 + 8 * m);
        x /= 2;
        x = (x * (x + 1)) / 2;
        if (x == m) {
            cout << 1 << endl;
        } else {
            cout << 0 << endl;
        }
    }
    return 0; 
}