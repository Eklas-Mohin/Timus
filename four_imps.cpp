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

    int n;
    cin >> n;

    n = (n * (n + 1)) / 2;

    if (n % 2) {
        cout << "grimy" << endl;
    } else {
        cout << "black" << endl;
    }
    
    return 0; 
}