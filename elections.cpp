#include <iostream>
#include <map>
#include <iomanip>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int n, m, x;
    double k;
    map<int, double> mp;

    cin >> n >> m;

    for (int i = 0; i < m; ++i) {
        cin >> x;
        mp[x] += 1;
    }

    for (int i = 1; i <= n; ++i) {
        k = double(mp[i] / m);
        k = k * 100;
        printf("%0.2lf%\n", k);
    }

    return 0; 
}