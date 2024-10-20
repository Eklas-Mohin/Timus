#include <iostream>
#include <cmath>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    long long n, m, x;
    cin >> n;

    for (int i = 0; i < n; ++i) {
        cin >> m;
        m = m - 1;
        x = - 1 + sqrt(1 + 8 * m);
        x /= 2;
        x = (x * (x + 1)) / 2;
        if (x == m) {
            cout << 1 << endl;
        } else {
            cout << 0 << endl;
        }
    }

    return 0; 
}