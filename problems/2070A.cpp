#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long n;
        cin >> n;

        long long full = n / 15;
        long long rem = n % 15;

        long long ans = full * 3;

        for (int i = 0; i <= rem; i++) {
            if (i % 3 == i % 5) {
                ans++;
            }
        }

        cout << ans << '\n';
    }

    return 0;
}