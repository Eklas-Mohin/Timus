#include <iostream>
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

    int a, b, c, in, ans = 0;
    map<int, bool> A;
    map<int, bool> B;

    cin >> a;
    for (int i = 0; i < a; ++i) {
        cin >> in;
        A[in] = true;
    }

    cin >> b;
    for (int i = 0; i < b; ++i) {
        cin >> in;
        B[in] = true;
    }

    cin >> c;
    for (int i = 0; i < c; ++i) {
        cin >> in;
        if (A[in] == true and B[in] == true) {
            ans += 1;
        }
    }

    cout << ans << endl;

    return 0;
}
