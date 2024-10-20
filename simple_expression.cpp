#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int a, b, c;
    cin >> a >> b >> c;

    int mn = a - b * c;
    mn = min(mn, a - b - c);

    cout << mn << endl;

    return 0;
}
