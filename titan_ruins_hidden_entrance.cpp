#include <iostream>
#include <climits>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int n, mx, p, arr[1000];
    mx = INT_MIN;

    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    for (int i = 2; i < n; ++i) {
        int sum = arr[i] + arr[i - 1] + arr[i - 2];
        if (sum > mx) {
            mx = sum;
            p = i;
        }
    }

    cout << mx << ' ' << p << endl;

    return 0; 
}