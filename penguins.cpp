/**
 *    author: mohin    
**/

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n{}, curr{};
    string str{}, p{}, ans{};
    map<string, int> mp;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> str >> p;
        mp[str] += 1;
        if (mp[str] >= curr) {
            ans = str;
            curr += 1;
        }
    }
    ans = ans + ' ' + p;
    cout << ans << endl;
    return 0; 
}