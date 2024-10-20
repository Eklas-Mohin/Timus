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

    int n, m;
    cin >> n >> m;

    if (n % 2 == 0 || m % 2 == 1) {
        cout << "yes" << endl;
    } else {
        cout << "no" << endl;
    }

    return 0;
}
