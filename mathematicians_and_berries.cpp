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

    int w1, w2, w3, w4, w5, w6, f1, f2;
    cin >> w1 >> w2 >> w3 >> w4 >> w5 >>  w6;

    f1 = w1 - w5;
    f2 = w2 - w4;

    cout << f1 << ' ' << f2 << endl;
    
    return 0;
}