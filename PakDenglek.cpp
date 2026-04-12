#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> A(N);
    int total = 0;

    for (int i = 0; i < N; i++) {
        cin >> A[i];
        total += A[i];
    }

    for (int i = 0; i < N; i++) {
        cout << total - A[i] << endl;
    }

    return 0;
}
