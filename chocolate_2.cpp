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

    int a, b;
    cin >> a >> b;

    a *= b;
    
    if (a % 2) {
        cout << "[second]=:]" << endl;
    } else {
        cout << "[:=[first]" << endl;
    }

    return 0;
}
