/**
 *    author: mohin    
**/

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    long long n{}, len{}, ans{1};
    string str{};
    cin >> n >> str;
    len = str.length();
    while (n > 0) {
        ans = ans * n;
        n = n - len;
    }
    cout << ans << endl;
    return 0;
}