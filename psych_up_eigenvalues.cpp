/**
 *    author: mohin    
**/

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int a{}, b{}, c{}, in{}, ans{};
    map<int, bool> A;
    map<int, bool> B;
    cin >> a;
    for (int i = 0; i < a; ++i) {
        cin >> in;
        A[in] = true;
    }
    cin >> b;
    for (int i = 0; i < b; ++i) {
        cin >> in;
        B[in] = true;
    }
    cin >> c;
    for (int i = 0; i < c; ++i) {
        cin >> in;
        if (A[in] == true and B[in] == true) {
            ans += 1;
        }
    }
    cout << ans << endl;
    return 0;
}
