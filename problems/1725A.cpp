#include <iostream>
using namespace std;

int main() {
    long long N, M;
    cin >> N >> M;

    if (M > 1) {
        cout << N * (M - 1) << endl;
    } else {
        cout << N - M << endl;
    }
}