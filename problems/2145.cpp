#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    while (N--) {
        int t;
        cin >> t;
        
        int sisa = t % 3;
        if (sisa == 0) {
            cout << 0 << endl;
        } else {
            cout << 3 - sisa << endl;
        }
    }
    return 0;
}