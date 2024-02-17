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
    if (n > 0 and n < 5) {
        cout << "few" << endl;
    } else if (n > 4 and n < 10) {
        cout << "several" << endl;
    } else if (n > 9 and n < 20) {
        cout << "pack" << endl;
    } else if (n > 19 and n < 50) {
        cout << "lots" << endl;
    } else if (n > 49 and n < 100) {
        cout << "horde" << endl;
    } else if (n > 99 and n < 250) {
        cout << "throng" << endl;
    } else if (n > 249 and n < 500) {
        cout << "swarm" << endl;
    } else if (n > 499 and n < 1000) {
        cout << "zounds" << endl;
    } else {
        cout << "legion" << endl;
    }
    return 0;
}