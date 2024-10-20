#include <iostream>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int n, ans;
    string str;

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