#include <iostream>
using namespace std;

long long ganjil (long long x) {
    return (x + 1) / 2;
}

int main() {
    int n;
    cin >> n;

    while (n--) {
        long long n, k;
        cin >> n >> k;

        long long R = n - k + 1;
        long long N = n;

        long long odd = ganjil(N) - ganjil(R - 1);

        if (odd % 2 == 0) {
            cout << "yes";
        } else {
            cout << "no";
        }

    }
    return 0;
}