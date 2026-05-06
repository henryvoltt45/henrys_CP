#include <iostream>
using namespace std;

long long N, P, L;

bool kardus(long long S) {
    long long kl = S / L;
    long long br = S / P;

    if (kl == 0 || br == 0) return false;
    return kl >= (N + br - 1) / br;
}

int main() {
    cin >> N >> P >> L;

    long long b = 1, ats = 10e12;
    long long ans = ats;

    while (b <= ats) {
        long long mid = b + (ats - b) / 2;

        if (kardus(mid)) {
            ans = mid;       
            ats = mid - 1;      
        } else {
            b = mid + 1;
        }
    }

    cout << ans << endl;
}