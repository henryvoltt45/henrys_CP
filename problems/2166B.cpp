#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        long long a, b, n;
        cin >> a >> b >> n;

        long long k = a / b;
        long long ans = (n + k) / (k + 1);

        cout << ans << endl;
    }
    return 0;
}