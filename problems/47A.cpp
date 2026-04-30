#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        int triangle = i * (i + 1) / 2;
        if (triangle == n) {
            cout << "YES" << endl;
            return 0;
        }
    } 
    cout << "NO" << endl;
    return 0;
}