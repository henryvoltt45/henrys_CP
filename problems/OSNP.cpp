#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    int r_terbaik = 1;
    int c_terbaik = N;

    for (int i = 2; i * i <= N; i++) {
        if (N % i == 0) {
            int r = i;
            int c = N / r;

            if (c - r < c_terbaik - r_terbaik) {
                r_terbaik = r;
                c_terbaik = c;
            }
        }
    }
    cout << r_terbaik << " " << c_terbaik << endl;
    return 0;
}