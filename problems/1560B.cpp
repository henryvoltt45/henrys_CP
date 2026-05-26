#include <iostream>
#include <cmath>
using namespace std;

void Solve() {
    long long a, b, c;
    cin >> a >> b >> c;

    long long mid = abs(a - b);
    long long full = mid * 2;

    if (a > full || b > full || c > full) {
        cout << -1 << endl;
        return;
    }

    long long oposisi;
    if(c <= mid) {
        oposisi = c + mid;
    } else {
        oposisi = c - mid;
    }
    cout << oposisi << endl;
}

int main() {
    int t;
    cin >> t;

    while(t--) {
        Solve();
    }
    return 0;
}