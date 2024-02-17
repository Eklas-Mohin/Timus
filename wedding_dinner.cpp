/**
 *    author: mohin    
**/

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n{}, ans{};
    string str{};
    cin >> n;
    ans = n + 2;
    for (int i = 0; i < n; ++i) {
        cin >> str;
        for (int i = 0; i < str.length(); ++i) {
            if (str[i] == '+') {
                ans += 1;
                break;
            }
        }
    }
    if (ans == 13) {
        ans += 1;
    }
    cout << ans * 100 << endl;
    return 0;
}