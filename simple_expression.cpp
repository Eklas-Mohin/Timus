/**
 *    author: mohin    
**/

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int a{}, b{}, c{}, mn{};
    cin >> a >> b >> c;
    mn = a - b * c;
    mn = min(mn, a - b - c);
    cout << mn << endl;
    return 0;
}