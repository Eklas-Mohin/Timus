/**
 *    author: mohin    
**/

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n{};
    cin >> n;
    if (n > 0) {
        cout << (n * (n + 1)) / 2 << endl;
    } else {
        cout << 1 - ((-n * -(n - 1)) / 2) << endl;
    }
    return 0;
}