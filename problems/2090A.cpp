#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        long long x, y, a;
        cin >> x >> y >> a;

        long long target = 2 * a + 1;
        long long count = x + y;
        long long k = target / (2 * count);
        long long total = 2 * count * k;

        total += 2 * x;
        if (total > target) {
            cout << "No" << endl;
            continue;
        }

        total += 2 * y;
        if (total > target) {
            cout << "Yes" << endl;
        }

    }
    return 0;
}