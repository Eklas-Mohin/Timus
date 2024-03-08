/**
 *    author: mohin    
**/

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int w1{}, w2{}, w3{}, w4{}, w5{}, w6{}, f1{}, f2{};
    cin >> w1 >> w2 >> w3 >> w4 >> w5 >>  w6;
    f1 = w1 - w5;
    f2 = w2 - w4;
    cout << f1 << ' ' << f2 << endl;
    return 0;
}