/**
 *    author: mohin    
**/

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n{};
    cin >> n;
    n = (n * (n + 1)) / 2;
    if (n % 2) {
        cout << "grimy" << endl;
    } else {
        cout << "black" << endl;
    }
    return 0; 
}