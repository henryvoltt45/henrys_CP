#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    int count = min(a, min(b / 2, c / 4));
    cout << count * 7 << endl;
    return 0;
}