/**
 *    author: mohin    
**/

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int k{}, n{}, x{}, arr[100] = {};
    cin >> k >> n;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    for (int i = 0; i < n - 1; ++i) {
        x = max(0, arr[i] - k);
        arr[i + 1] += x;
    }
    arr[n - 1] -= k;
    cout << max(0, arr[n - 1]) << endl;
    return 0;
}