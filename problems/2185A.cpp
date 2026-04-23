#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    while(n--) {
        int t;
        cin >> t;

        for (int i = 1; i <= t; i++) {
            cout << i << (i == t ? "" : " ");
        }
        cout << endl;
    }
    return 0;
}