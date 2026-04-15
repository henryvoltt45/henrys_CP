#include <iostream>
using namespace std;

long long hasil (long long t) {
    return 2 * t;
}
int main() {
    long long N;
    if (!(cin >> N)) return 0;

    while(N--) {
        long long t;
        if (cin >> t) {
            cout << hasil(t) << "\n";
        }
    }
    return 0;
}