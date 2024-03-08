/**
 *    author: mohin    
**/

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int a{}, b{};
    cin >> a >> b;
    a *= b;
    if (a % 2) {
        cout << "[second]=:]" << endl;
    } else {
        cout << "[:=[first]" << endl;
    }
    return 0;
}