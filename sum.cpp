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

    int n;
    cin >> n;
    
    if (n > 0) {
        cout << (n * (n + 1)) / 2 << endl;
    } else {
        cout << 1 + ((n * (1 - n)) / 2) << endl;
    }

    return 0;
}