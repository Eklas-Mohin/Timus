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

    int n, a, b;
    cin >> n >> a >> b;
    
    int ans = 2 * n * a * b;
    cout << ans << endl;

    return 0;
}
