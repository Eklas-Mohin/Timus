/**
 *    author: mohin    
**/

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n{}, m{};
    cin >> n >> m;
    if (n % 2 == 0 or m % 2 == 1) {
        cout << "yes" << endl;
    } else {
        cout << "no" << endl;
    }
    return 0;
}