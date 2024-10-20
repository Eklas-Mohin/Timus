#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    long long n, len, ans = 1;
    string str;

    cin >> n >> str;
    len = str.length();

    while (n > 0) {
        ans = ans * n;
        n = n - len;
    }

    cout << ans << endl;

    return 0;
}