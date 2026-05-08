#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        long long a, b, k;
        cin >> a >> b >> k;

        long long mid = k / 2;
        long long count = mid * (a - b);

        if (k % 2 == 1) {
            count += a;
        }
        cout << count << endl;
    }
    return 0;
}