#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a[100];
    int sum = 0, mx = 0;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i];
        if (a[i] > mx) mx = a[i];
    }

    cout << (n * mx - sum) << endl;
}