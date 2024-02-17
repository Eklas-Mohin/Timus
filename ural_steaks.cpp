/**
 *    author: mohin    
**/

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n{}, k{};
    cin >> n >> k;
    n = n + n + k - 1;
    cout << max(2, n / k) << endl;
    return 0;
}