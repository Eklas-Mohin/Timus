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
    bool flag = true;
    double total = 0, avg;

    cin >> n;

    for (int i = 0; i < n; ++i) {
        cin >> m;
        total += m;
        if (m == 3) {
            flag = false;
        }
    }

    avg = total / double(n);

    if (flag) {
        if (avg == 5) {
            cout << "Named" << endl;
        } else if (avg >= 4.5) {
            cout << "High" << endl;
        } else {
            cout << "Common" << endl;
        }
    } else {
        cout << "None" << endl;
    }
    
    return 0;
}
