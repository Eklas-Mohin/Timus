#include <iostream>
#include <iomanip>
#include <cmath>
#include <stack>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    double n;
    stack<double> results;

    while (cin >> n) {
        results.push(sqrt(n));
    }

    while (!results.empty()) {
        cout << fixed << setprecision(4) << results.top() << endl;
        results.pop();
    }

    return 0;
}
