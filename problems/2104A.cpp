#include <iostream>
using namespace std;

int main() {
    int x;
    cin >> x;

    while(x--) {
        int a, b, c;
        cin >> a >> b >> c;

        int y = a + b + c;

        if (y % 3 == 0) {
            int z = y / 3;
            if (z >= b) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}