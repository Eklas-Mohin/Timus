/**
 *    author: mohin    
**/

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n{}, m{};
    bool flag{true};
    double total{}, avg{};
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> m;
        total += m;
        if (m == 3) {
            flag = false;
        }
    }
    avg = total / double(n);
    if (flag) {
        if (avg == 5) {
            cout << "Named" << endl;
        } else if (avg >= 4.5) {
            cout << "High" << endl;
        } else {
            cout << "Common" << endl;
        }
    } else {
        cout << "None" << endl;
    }
    return 0;
}