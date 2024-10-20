#include <iostream>
#include <string>
#include <map>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int n, curr = 0;
    string str, p, ans;
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