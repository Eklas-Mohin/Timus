/**
 *    author: mohin    
**/

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n{}, mx{INT_MIN}, p{}, arr[1000] = {};
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