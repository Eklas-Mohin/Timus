/**
 *    author: mohin    
**/

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    double n{};
    vector<double> ans;
    while (cin >> n) {
        ans.push_back(sqrt(n));
    }
    reverse(ans.begin(), ans.end());
    for (int i = 0; i < ans.size(); ++i) {
        cout << setprecision(4) << fixed << ans[i] << endl;
    }
    return 0;
}