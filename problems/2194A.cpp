#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        long long n, w;
        cin >> n >> w;

        if(w == 1) {
            cout << 0 << endl;
        } else {
            cout << n - (n / w) << endl;
        }
    }
    return 0;
}